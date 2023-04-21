#include<iostream>

using namespace std;

int main() 
{
	int num1, num2, suma, producto;

	cout << "Ingrese el primer número: ";
	cin >> num1;
	cout << "Ingrese el segundo número: ";
	cin >> num2;

	suma = num1 + num2;
	producto = num1 * num2;

	cout <<"La suma de los dos numeros es: ";
	cout <<suma;
	cout << "\n";
	cout << "El producto de los dos numeros es: ";
	cout << producto;

	return 0;
}