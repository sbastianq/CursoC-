#include <iostream>
using namespace std;

void temperaturas();

int main() {
	temperaturas();
	return 0;
}

void temperaturas() {

	int temperaturaDia[6];
	int tempMayor, tempMenor, hora;

	float promedio;
	promedio = 0;
	float sumatoria;
	sumatoria = 0;

	tempMenor = 222222;
	tempMayor = -222222;

	hora = 4;

	for (int i = 0; i <= 5; i++) {
		system("cls");
		cout << "\tIngrese las temperaturas durante las ultimas 24 horas\n\n";
		cout << "Temperatura a las " << hora << " horas: ";
		hora = hora + 4;
		cin >> temperaturaDia[i];
		if (temperaturaDia[i] < tempMenor)
			tempMenor = temperaturaDia[i];
		if (temperaturaDia[i] > tempMayor)
			tempMayor = temperaturaDia[i];
		sumatoria += temperaturaDia[i];
	}
	promedio = sumatoria / 6;
	system("cls");
	hora = 4;
	cout << "\tTemperaturas registradas durante las ultimas 24 horas\n\n";

	for (int i = 0; i <= 5; i++) {
		cout << "Temperatura a las " << hora << " horas: " << temperaturaDia[i] << endl;
		hora = hora + 4;
	}
	cout << "\nTemperatura mayor registrada: " << tempMayor << endl;
	cout << "Temperatura menor registrada: " << tempMenor << endl;
	cout << "Promedio de la temperatura durante el dia: " << promedio << endl;

}