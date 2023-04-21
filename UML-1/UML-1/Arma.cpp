// DEPENDENCIA objeto
#include <string>
using namespace std;

class Arma
{
public:
	Arma(int dano, int rango) : dano(dano), rangoAtaque(rango) {}
	int dano;
	int rangoAtaque;
};

class Arco : public Arma
{
public:
	Arco(int dano = 1, int rango = 30) : Arma(dano, rango) {}
};
class Pistola : public Arma
{
public:
	Pistola(int dano = 3, int rango = 2) : Arma(dano, rango) {}
};
class Varita : public Arma
{
public:
	Varita(int dano = 2, int rango = 3) : Arma(dano, rango) {}
};