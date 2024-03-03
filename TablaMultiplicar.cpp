#include <iostream>

using namespace std;


void imprimirMultiplicacion();

int main() {
	imprimirMultiplicacion();
	return 0;
}

void imprimirMultiplicacion() {
	int num;

	cout << "Numero del cual se evaluara la multiplicacion hasta el 10: ";
	cin >> num;
	cout << endl;

	cout << "\tMultiplicacion del " << num << " desde 1 hasta el 10" << endl << endl;
	for (int i = 1; i <= 10; i++) {
		cout << num << " * " << i << " = " << i * num << endl;
	}
}