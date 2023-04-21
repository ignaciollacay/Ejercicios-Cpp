#include<iostream>

using namespace std;

// Ejercicio 2
int main()
{
	int sumaAcreedores = 0;
	int saldo;

	do
	{
		int cuenta;
		cout << "Ingrese el numero de la cuenta: ";
		cin >> cuenta;
		cout << "Ingrese el saldo de la cuenta: ";
		cin >> saldo;

		cout << "Cuenta ";
		cout << cuenta;
		cout << ". Saldo: ";
		cout << saldo;
		cout << ". Estado de cuenta: ";
		if (saldo == 0)
		{
			cout << "Nulo";
		}
		else
		{
			if (saldo > 0)
			{
				cout << "Acreedor";
				sumaAcreedores += saldo;
			}
			else
			{
				cout << "Deudor";
			}
		}
		cout << "\n";
	} while (saldo >= 0);

	cout << "Suma total de los saldos acreedores: ";
	cout << sumaAcreedores;
}

//// Ejercicio 1;
//int main()
//{
//	int num, suma = 0;
//
//	do {
//		cout << "Ingrese un numero a sumar o ingrese 9999 para finalizar: ";
//		cin >> num;
//		if (num != 9999)
//			suma += num;
//	} while (num != 9999);
//
//	cout << "El valor de la suma es: ";
//	cout << suma;
//	cout << "\n";
//	if (suma == 0)
//		cout << "El valor de la suma es 0";
//	else{
//		if (suma > 0)
//			cout << "El valor de la suma es mayor a 0";
//		else
//			cout << "El valor de la suma es menor a 0";
//	}
//	return 0;
//}