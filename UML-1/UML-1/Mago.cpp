#include "Unidad.cpp"
#include <string>
using namespace std;

class Mago : public Unidad
{
public:
	Mago(int vida, int velocidad);

	//void Atacar();

	virtual void RecibirDano(int dano) override
	{
		vida -= dano;
		cout << "Mago recibe dano=" << dano << ". Vida restante=" << vida << endl;

		if (vida == 0)
			Morir();
	}
	virtual void Morir() override
	{
		cout << "Mago muerto" << endl;
	}
	virtual void Mover(int posX, int posY) override
	{
		int x = posX + getVelocidad();
		int y = posY + getVelocidad();
		cout << "Mago se mueve a " << x <<", " << y << endl;
	}
};

Mago::Mago(int vida = 3, int velocidad = 3) : Unidad(vida, velocidad)
{
	this->arma = Varita(2,3);
}
