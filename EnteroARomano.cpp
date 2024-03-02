#include <iostream>

using namespace std;
void convNumEnteroRomano();

int main() {
	convNumEnteroRomano();
	return 0;
}

void convNumEnteroRomano() {
	int num;
	cout << "\tConversor de numeros enteros a romanos\n\n";
	cout << "Ingrese el numero que desea convertir: ";
	cin >> num;

	int cantM, cantC, cantX, cantI;

	// 2535 -- 2000 + 500 + 30 + 5

	cantI = num % 10;
	// 5
	num /= 10;

	cantX = num % 10;
	// 30
	num /= 10;

	cantC = num % 10;
	// 500
	num /= 10;

	cantM = num % 10;
	// 2000
	num /= 10;

	cout << "El numero " << num << " en romanos se escribe: ";

	switch (cantM) {
	case 1:
		cout << "M";
		break;
	case 2:
		cout << "MM";
		break;
	case 3:
		cout << "MM";
		break;
	}

	switch (cantC) {
	case 1:
		cout << "C";
		break;
	case 2:
		cout << "CC";
		break;
	case 3:
		cout << "CCC";
		break;
	case 4:
		cout << "CD";
		break;
	case 5:
		cout << "D";
		break;
	case 6:
		cout << "DC";
		break;
	case 7:
		cout << "DCC";
		break;
	case 8:
		cout << "DCCC";
		break;
	case 9:
		cout << "CM";
		break;
	default:
		break;
	}

	switch (cantX) {
	case 1:
		cout << "X";
		break;
	case 2:
		cout << "XX";
		break;
	case 3:
		cout << "XXX";
		break;
	case 4:
		cout << "XL";
		break;
	case 5:
		cout << "L";
		break;
	case 6:
		cout << "LX";
		break;
	case 7:
		cout << "LXX";
		break;
	case 8:
		cout << "LXXX";
		break;
	case 9:
		cout << "XC";
		break;
	}

	switch (cantI) {
	case 1:
		cout << "I";
		break;
	case 2:
		cout << "II";
		break;
	case 3:
		cout << "III";
		break;
	case 4:
		cout << "IV";
		break;
	case 5:
		cout << "V";
		break;
	case 6:
		cout << "VI";
		break;
	case 7:
		cout << "VII";
		break;
	case 8:
		cout << "VIII";
		break;
	case 9:
		cout << "IX";
		break;
	default:
		break;
	}
}