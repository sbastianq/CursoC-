#include <iostream>

using namespace std;


/*
Realice un programa que lea de la entrada estandar numeros hasta que 
se introduzca un cero. En ese momento el programa debe terminar y mostrar
en la salida estandar el numero de valores mayores que cero leidos.
*/

int main() {
	int numUsuario;
	int cantNumeros = 0;
	do {
		system("cls");
		cout << "Ingrese el numero 0 para terminar el programa: ";
		cin >> numUsuario;

		cantNumeros += 1;
	} while (numUsuario != 0);

	cout << "\n\nNumeros ingresados antes de ingresar el 0: " << cantNumeros - 1 << endl;

	return 0;
}