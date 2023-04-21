#include <iostream>

using namespace std;


class Reloj
{
public:
	Reloj(int horas, int minutos, int segundos);
	//bool Iguales(Reloj r);
	bool Iguales(const Reloj &r);
	void Imprimir();
private:
	int horas, minutos, segundos;
};

Reloj::Reloj(int horas, int minutos, int segundos)
{
	this->horas = horas;
	this->minutos = minutos;
	this->segundos = segundos;
}


//bool Reloj::Iguales(Reloj r)
//{
//	if (this->horas == r.horas && this->minutos == r.minutos && this->segundos == r.segundos)
//		return true;
//	else
//		return false;
//}
bool Reloj::Iguales(const Reloj &r)
{
	if (this->horas == r.horas && this->minutos == r.minutos && this->segundos == r.segundos)
		return true;
	else
		return false;
}

void Reloj::Imprimir()
{
	cout << horas << ":" << minutos << ":" << segundos << "\n";
}

int main()
{
	Reloj reloj1 = Reloj(0, 0, 0);
	reloj1.Imprimir();
	Reloj reloj2 = Reloj(1, 0, 0);
	reloj2.Imprimir();
	if (reloj1.Iguales(reloj2))
		cout << "Reloj 1 y Reloj 2 son iguales";
	else
		cout << "Reloj 1 y Reloj 2 no son iguales";
	return 0;
}
