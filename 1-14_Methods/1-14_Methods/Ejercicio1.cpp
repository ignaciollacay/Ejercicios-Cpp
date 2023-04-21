#include <iostream>

using namespace std;

class ValoresEnteros 
{
public:
	void CargarValor();
private:
	void NumerosMenores(int num);
};

void ValoresEnteros::CargarValor()
{
	int num;
	cout << "Ingrese un numero entero: ";
	cin >> num;

	NumerosMenores(num);
}
void ValoresEnteros::NumerosMenores(int x)
{
	int menor = 0;
	do
	{
		menor++;
		cout << menor;
		cout << " - ";
	} while (menor < x);
}

//int main()
//{
//	ValoresEnteros valoresEnteros;
//	valoresEnteros.CargarValor();
//
//	return 0;
//}