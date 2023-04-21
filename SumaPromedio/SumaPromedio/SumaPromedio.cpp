#include<iostream>

using namespace std;

int main() 
{
	int num1, num2, num3, num4;
	int suma;
	float promedio;

	cout << "Ingrese el primer valor: ";
	cin >> num1;
	cout << "Ingrese el segundo valor: ";
	cin >> num2;
	cout << "Ingrese el tercero valor: ";
	cin >> num3;
	cout << "Ingrese el cuarto valor: ";
	cin >> num4;

	suma = num1 + num2 + num3 + num4;
	promedio = suma / 4;

	cout << "La suma de los cuatro valores ingresados es: ";
	cout << suma;
	cout << "\n";
	cout << "El promedio de los cuatro valores ingresados es: ";
	cout << promedio;

	return 0;
}