#include<iostream>

using namespace std;

int main()
{
	int precio, cantidad;
	int importe;

	cout << "Ingrese el precio del articulo: ";
	cin >> precio;
	cout << "Ingrese su cantidad: ";
	cin >> cantidad;

	importe = precio * cantidad;

	cout << "Debe abonar: ";
	cout << importe;

	return 0;
}