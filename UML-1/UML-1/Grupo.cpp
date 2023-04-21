#include "Unidad.cpp"

// COMPOSICION:
class Grupo
{
	Unidad* unidad; // raiz
public:
	Grupo();
	~Grupo();
	void Agregar(Unidad* unidad);
	void Quitar(Unidad* unidad);
	void Mostrar();
};

Grupo::Grupo()
{
	unidad = NULL;
}
Grupo::~Grupo()
{
	Unidad* reco = unidad;
	while (reco != NULL)
	{
		Unidad* bor = reco;
		reco = reco->amigo;
		delete bor;
	}
}

void Grupo::Agregar(Unidad* unidad)
{
	if (this->unidad == NULL)
	{
		this->unidad == unidad;
	}
	else
	{
		this->unidad->amigo = unidad;
	}
}
void Grupo::Quitar(Unidad* unidad)
{
	Unidad* bor = this->unidad;
	this->unidad = this->unidad->amigo;
	delete bor;
}

void Grupo::Mostrar()
{
	if (unidad == NULL)
		return;

	int cant = 0;
	Unidad* reco = unidad;
	while (reco != NULL)
	{
		reco = reco->amigo;
		cant++;
	}
	cout << "Cantidad unidades en el grupo " << cant << endl;
}
