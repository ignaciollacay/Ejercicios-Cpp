#include "Unidad.cpp"

// INTERFACE atacar
class IDamager
{
public:
	virtual void Atacar(Unidad& objetivo) = 0;
};