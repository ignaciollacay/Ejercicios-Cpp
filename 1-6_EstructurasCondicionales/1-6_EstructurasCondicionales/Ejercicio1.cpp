#include<iostream>

using namespace std;

int OperacionesNumeros()
{
	int num1, num2;
	int suma, diferencia;
	int producto, division;

	cout << "Ingrese el primer valor: ";
	cin >> num1;
	cout << "Ingrese el segundo valor: ";
	cin >> num2;

	suma = num1 + num2;
	diferencia = num1 - num2;
	producto = num1 * num2;
	division = num1 / num2;

	if (num1 > num2) 
	{
		cout << "El valor de su suma es: ";
		cout << suma;
		cout << "\n";
		cout << "El valor de su diferencia es: ";
		cout << diferencia;
	}
	else
	{
		cout << "El valor de su producto es: ";
		cout << producto;
		cout << "\n";
		cout << "El valor de su division es: ";
		cout << division;
	}

	return 0;
}