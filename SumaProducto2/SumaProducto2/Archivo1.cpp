#include<iostream>

using namespace std;

int main()
{
	int num1, num2, num3, num4;
	int suma, producto;

	cout << "Ingrese el valor del primer numero: ";
	cin >> num1;
	cout << "Ingrese el valor del segundo numero: ";
	cin >> num2;
	cout << "Ingrese el valor del tercer numero: ";
	cin >> num3;
	cout << "Ingrese el valor del cuarto numero: ";
	cin >> num4;

	suma = num1 + num2;
	producto = num3* num4;

	cout << "La suma del primer valor (";
	cout << num1;
	cout << ") y del segundo valor (";
	cout << num2;
	cout << ") es: ";
	cout << suma;
	cout << "\n";
	cout << "El producto del tercer y cuarto valor es: ";
	cout << producto;

}