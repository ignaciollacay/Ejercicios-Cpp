#include <string>
using namespace std;

class Arma
{
protected:
	string nombre;
	string disparo;
public:
	string GetNombre() { return nombre; }
	string GetDisparo() { return disparo; }
};

class Escopeta : public Arma
{
public:
	Escopeta() { nombre = "la escopeta", disparo = "Pa!..."; }
};
class Revolver : public Arma
{
public:
	Revolver() { nombre = "el revolver", disparo = "Pum!..."; }
};
class Rifle : public Arma
{
public:
	Rifle() { nombre = "el rifle", disparo = "Pum pum pum!..."; }
};