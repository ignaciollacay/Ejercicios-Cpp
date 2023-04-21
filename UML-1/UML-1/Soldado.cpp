#include "Unidad.cpp"

class Soldado : public Unidad
{
public:
	Soldado(int vida, int velocidad);

	//void Atacar();

	virtual void RecibirDano(int dano) override
	{
		vida -= dano;
		cout << "Soldado recibe dano=" << dano << ". Vida restante=" << vida << endl;

		if (vida == 0)
			Morir();
	}
	virtual void Morir() override
	{
		cout << "Soldado muerto" << endl;
	}
	virtual void Mover(int posX, int posY) override
	{
		int x = posX + getVelocidad();
		int y = posY + getVelocidad();
		cout << "Soldado se mueve a " << x << ", " << y << endl;
	}
};