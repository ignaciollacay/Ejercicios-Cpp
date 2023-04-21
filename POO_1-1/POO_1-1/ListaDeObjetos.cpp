#include <iostream>
#include <string>

using namespace std;

class ClaseA
{
public:
	ClaseA(int id, string name);
	~ClaseA();
	void ShowInfo();
	int GetID();
	ClaseA* sig;
private:
	int id;
	string name;
};

class ListaDeObjetos
{
public:
	ListaDeObjetos();
	~ListaDeObjetos();
	ClaseA* claseA;
	ClaseA* NuevoObjetoLista();
	void Almacenar();
	void Retirar();
	void MostrarInfo(int pos);
	void MostrarInfo();
private:
	const static int maxCantidad = 20;
	int cantidad;
};

ClaseA::ClaseA(int id, string name)
{
	sig = NULL;
	this->id = id;
	this->name = name;
}

ClaseA::~ClaseA()
{
}

void ClaseA::ShowInfo()
{
	cout << "ID=" << id << ", NAME=" << name <<"\n";
}

int ClaseA::GetID()
{
	return id;
}

ListaDeObjetos::ListaDeObjetos()
{
	claseA = NULL;
	cantidad = 0;
}

ListaDeObjetos::~ListaDeObjetos()
{
	if (cantidad > 0) 
	{
		ClaseA* reco = claseA;
		for (int i = 0; i < cantidad; i++)
		{
			ClaseA* bor = reco;
			reco = reco->sig;
			delete bor;
		}
	}
}

ClaseA* ListaDeObjetos::NuevoObjetoLista()
{
	ClaseA* nuevoObj = new ClaseA(cantidad, "objetoA" + cantidad);
	return nuevoObj;
}

void ListaDeObjetos::Almacenar()
{
	if (cantidad <= maxCantidad)
	{
		ClaseA* newClaseA = NuevoObjetoLista();
		if (claseA == NULL)
		{
			claseA = newClaseA;
		}
		else
		{
			newClaseA->sig = claseA;
			claseA = newClaseA;
		}
		cantidad++;
	}
	else
	{
		cout << "el arreglo está lleno\n";
	}
}

void ListaDeObjetos::Retirar()
{
	if (cantidad > 0)
	{
		ClaseA* bor = claseA;
		claseA = claseA->sig;
		delete bor;
		cantidad--;
	}
	else
	{
		cout << "no hay nada para sacar del arreglo\n";
	}
}

void ListaDeObjetos::MostrarInfo(int pos)
{
	if (pos < cantidad)
	{
		ClaseA* reco = claseA;
		for (int i = 0; i < pos; i++)
		{
			if (i < pos)
			{
				reco = reco->sig;
			}
		}
		reco->ShowInfo(); 
	}
	else
	{
		cout << "dicha posición no tiene algo guardado\n";
	}
}

void ListaDeObjetos::MostrarInfo()
{
	ClaseA* reco = claseA;
	for (int i = 0; i < cantidad; i++)
	{
		reco->ShowInfo();
		reco = reco->sig;
	}
}

int main()
{
	ListaDeObjetos listaDeObjetos1 = ListaDeObjetos();
	listaDeObjetos1.Almacenar();
	listaDeObjetos1.Almacenar();
	listaDeObjetos1.MostrarInfo(0);
	listaDeObjetos1.Retirar();
	listaDeObjetos1.MostrarInfo();

	return 0;
}