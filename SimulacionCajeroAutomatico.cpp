#include <iostream>

using namespace std;

void inicioSesionCajero();
void menuCajero();
void retirarDinero();
void consultarEstadoCuenta();

int fondosCajero = 10000;
int fondosUsuario = 1250;
int dineroEnMano = 0;

int main() {
	inicioSesionCajero();
	menuCajero();
	return 0;
}

void inicioSesionCajero() {
	int pinUsuario;
	pinUsuario = 0;
	int pinCorrecto;
	pinCorrecto = 12345;

	int x;
	x = 0;

	while (pinUsuario != pinCorrecto) {
		system("cls");

		x++;
		cout << "\tBienvenido al cajero\n";
		cout << "Ingrese su pin: ";
		cin >> pinUsuario;

		if (x > 0 and pinUsuario != pinCorrecto) {
			cout << "Pin incorrecto\n\n";
			system("pause");
		}
	}
}

void menuCajero() {
	int opcionUsuario;
	bool decisionRepetir;
	int opcionRepetir;

	do {
		do {
			system("cls");
			cout << "\tBienvenido al menu del cajero\n\n";
			cout << "1. Consultar estado de cuenta\n";
			cout << "2. Retirar dinero\n\n";
			cout << "Digite la opcion a elegir: ";
			cin >> opcionUsuario;
		} while (opcionUsuario != 1 and opcionUsuario != 2);

		switch (opcionUsuario) {
		case 1:
			consultarEstadoCuenta();
			break;
		case 2:
			retirarDinero();
			break;
		}

		int repeTempo = 0;

		do {
			if (repeTempo > 0)
				system("cls");

			repeTempo += 1;

			cout << "Desea realizar otra accion?\n1. Si\n2. No\nDigite la respuesta: ";
			cin >> opcionRepetir;
		} while (opcionRepetir != 1 and opcionRepetir != 2);
		if (opcionRepetir == 1)
			decisionRepetir = true;
		else if (opcionRepetir == 2)
			decisionRepetir = false;

	} while (decisionRepetir == true);

}

void retirarDinero() {
	int opcionDinero;

	do {
		system("cls");
		cout << "\tRetiro de dinero\n\n";
		cout << "Opciones a retirar: \n\n";

		cout << "1. Q50\n";
		cout << "2. Q100\n";
		cout << "3. Q500\n";
		cout << "4. Q1000\n\n";

		cout << "Digite la opcion: ";
		cin >> opcionDinero;

	} while (opcionDinero != 1 and opcionDinero != 2 and opcionDinero != 3 and opcionDinero != 4);
	

	if ((opcionDinero == 1 and fondosUsuario < 50) or (opcionDinero == 2 and fondosUsuario < 100) or (opcionDinero == 3 and fondosUsuario < 500) or (opcionDinero == 4 and fondosUsuario < 1000)) {
		system("cls");
		cout << "Fondos insuficientes disponibles en la cuenta del usuario\n\n";
		return;
	}

	if ((opcionDinero == 1 and fondosCajero < 50) or (opcionDinero == 2 and fondosCajero < 100) or (opcionDinero == 3 and fondosCajero < 500) or (opcionDinero == 4 and fondosCajero < 1000)) {
		system("cls");
		cout << "Fondos insuficientes disponibles en el cajero, contactar a soporte\n\n";
		return;
	}


	switch (opcionDinero) {
	case 1:
		fondosUsuario -= 50;
		fondosCajero -= 50;
		dineroEnMano += 50;
		break;
	case 2:
		fondosUsuario -= 100;
		fondosCajero -= 100;
		dineroEnMano += 100;
		break;
	case 3:
		fondosUsuario -= 500;
		fondosCajero -= 500;
		dineroEnMano += 500;
		break;
	case 4:
		fondosUsuario -= 1000;
		fondosCajero -= 1000;
		dineroEnMano += 1000;
		break;
	}

	cout << "\n\tSe ha retirado de manera correcta\n\n";
}

void consultarEstadoCuenta() {
	system("cls");
	cout << "\tResumen estado de cuenta\n\n";
	cout << "Fondos de la cuenta: Q" << fondosUsuario << endl;
	cout << "Dinero en mano: Q" << dineroEnMano << endl;
	cout << "Fondos del cajero: Q" << fondosCajero << endl << endl;
}