#include<iostream>

using namespace std;

int CantidadDigitos()
{
	int num;

	cout << "Ingrese un valor: ";
	cin >> num;

	if (num<10)
	{
		cout << "Ha ingresado un n�mero positivo de un digito";
	}
	else if (num<100)
	{
		cout << "Ha ingresado un n�mero positivo de dos digitos";
	}

	return 0;
}
