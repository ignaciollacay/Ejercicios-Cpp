#include "Unidad.cpp"

// HERENCIA: Especializacion. Superclase

class Arquero : public Unidad
{
public:
	Arquero(int vida, int velocidad);

	//void Atacar();

	virtual void RecibirDano(int dano) override
	{
		vida -= dano;
		cout << "Arquero recibe dano=" << dano << ". Vida restante=" << vida << endl;

		if (vida == 0)
			Morir();
	}
	virtual void Morir() override
	{
		cout << "Arquero muerto" << endl;
	}
	virtual void Mover(int posX, int posY) override
	{
		int x = posX + getVelocidad();
		int y = posY + getVelocidad();
		cout << "Arquero se mueve a " << x << ", " << y << endl;
	}
};

Arquero::Arquero(int vida = 5, int velocidad = 9) : Unidad(vida, velocidad)
{
	this->arma = Arco();
}
