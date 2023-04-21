#include<iostream>

using namespace std;

int NotaAlumnos()
{
	int num1, num2, num3, suma, promedio;

	cout << "Ingrese el primer valor: ";
	cin >> num1;
	cout << "Ingrese el segundo valor: ";
	cin >> num2;
	cout << "Ingrese el tercer valor: ";
	cin >> num3;

	suma = num1 + num2 + num3;
	promedio = suma / 3;

	if (promedio >= 7)
	{
		cout << "Promocionado";
	}

	return 0;
}