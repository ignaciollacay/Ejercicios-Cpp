#include<iostream>
using namespace std;

class Punto
{
	int _x, _y;
public:
	Punto();
	Punto(int x, int y);
	void Imprimir();
};

Punto::Punto()
{
	_x = 0;
	_y = 0;
}

Punto::Punto(int x, int y)
{
	_x = x;
	_y = y;
}

void Punto::Imprimir()
{
	cout << _x << ", " << _y;
}

int main()
{
	Punto p1;
	p1.Imprimir();
	Punto p2(0, 0);
	p2.Imprimir();
}