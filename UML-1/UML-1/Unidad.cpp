#include "IDamagable.cpp"
#include "IMovable.cpp"
//#include "IDamager.cpp"
#include <iostream>
#include "Arma.cpp"

using namespace std;

// HERENCIA: Generalizacion. Superclase
class Unidad : IDamagable, IMovable//, IDamager
{
protected:
	//int posX;
	//int posY;
	int vida = 0;
	int velocidad = 0;
	Arma arma = Arma(0, 0);;

	Unidad* amigo = NULL;
	Unidad* enemigo = NULL;

public:
	friend class Grupo;
	Unidad(int vida, int velocidad);
	virtual ~Unidad();

	int getVida() const { return vida; }
	int getVelocidad() const { return velocidad; }
};

Unidad::Unidad(int vida, int velocidad)
{
	this->vida = vida;
	this->velocidad = velocidad;
	arma = Arma(0,0);
	this->amigo = NULL;
	this->enemigo = NULL;
}

Unidad::~Unidad()
{
	delete amigo;
	delete enemigo;
}
