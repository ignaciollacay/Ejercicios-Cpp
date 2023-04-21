#include <iostream>
using namespace std;

class BinaryTree
{
private:
	class Nodo
	{
	public:
		int info;
		Nodo* izq;
		Nodo* der;
	};
	Nodo* raiz;

	void borrar(Nodo* reco);
	void imprimirEntre(Nodo* reco);
	void imprimirEntreConNivel(Nodo* reco, int nivel);

	int altura = 0;
	void Altura(Nodo* reco, int nivel);
	void CantidadNodos(Nodo* reco);
	int cantidadNodos = 0;
	void CantidadNodosHoja(Nodo* reco);
	int cantidadNodosHoja = 0;
public:
	BinaryTree();
	~BinaryTree();
	void insertar(int x);
	void imprimirEntre();
	void imprimirEntreConNivel();

	bool Existe(int num);
	int CantidadNodos();
	int CantidadNodosHoja();
	int Altura();
	int ImprimirMayorNodo();
	void BorrarMenorNodo();
};

BinaryTree::BinaryTree()
{
	raiz = NULL;
}

BinaryTree::~BinaryTree()
{
	borrar(raiz);
}

void BinaryTree::borrar(Nodo* reco)
{
	if (reco != NULL)
	{
		// Funcion recursiva. Pasar reco al siguiente valor y volver a ejecutar.
		// borra todos los hijos de ambos lados a partir del nodo que recibe por parametro.
		borrar(reco->izq);
		borrar(reco->der);
		delete reco;
	}
}
void BinaryTree::insertar(int x)
{
	Nodo* nuevo = new Nodo();
	nuevo->info = x;
	nuevo->izq = NULL;
	nuevo->der = NULL;

	// Si el árbol está vacío, apuntamos raíz al nodo creado
	if (raiz == NULL)
	{
		raiz = nuevo;
	}
	else
	{
		Nodo* anterior = NULL; // 
		Nodo* reco = raiz;

		// dentro de una estructura repetitiva vamos comparando x con la información del nodo hasta encontrar un subarbol vacio
		while (reco != NULL)
		{
			anterior = reco;

			// si x es menor a la del nodo descendemos por el subárbol izquierdo
			if (x < reco->info)
				reco = reco->izq;
			// si x es mayor a la del nodo descendemos por el subárbol derecho
			else
				reco = reco->der;
		}
		// Cuando se encuentra un subárbol vacío 
		// insertar el nodo en dicho subárbol
		// Del lado izquierdo o derecho segun sea mayor o menor a la informacion del nodo.
		if (x < anterior->info)
			anterior->izq = nuevo;
		else
			anterior->der = nuevo;
	}
}

void BinaryTree::imprimirEntre()
{
	// Recorrer todo el arbol con un Imprimir recursivamente cada nodo a partir de la raiz hasta el final, 
	// de manera ordenada
	// Imprime el nodo izq y luego el der pasando de niveles hacia abajo.
	imprimirEntre(raiz);
	cout << "\n";
}
void BinaryTree::imprimirEntre(Nodo* reco)
{
	if (reco != NULL)
	{
		imprimirEntre(reco->izq); // Recorrido 1 por la rama izquierda
		cout << reco->info << "-"; // Visita: Imprimir info entre medio del recorrido por cada rama
		imprimirEntre(reco->der); // Recorrido 2 por la rama derecha
	}
}

void BinaryTree::imprimirEntreConNivel()
{
	imprimirEntreConNivel(raiz, 1);
	cout << "\n";
}

void BinaryTree::imprimirEntreConNivel(Nodo* reco, int nivel)
{
	if (reco != NULL)
	{
		imprimirEntreConNivel(reco->izq, nivel + 1); // Recorrido 1 por la rama izquierda
		cout << reco->info << " (nivel " << nivel << ") - "; // Visita: Imprimir info entre medio del recorrido por cada rama
		imprimirEntreConNivel(reco->der, nivel + 1); // Recorrido 2 por la rama derecha
	}
}

bool BinaryTree::Existe(int x)
{
	Nodo* reco = raiz;
	while (reco != NULL)
	{
		// is found?
		if (reco->info == x)
		{
			cout << "Si";
			return true;
		}

		// continue search within corresponding branch according to the value looked for.
		else
		{
			if (x > reco->info)
				reco = reco->der;
			else
				reco = reco->izq;
		}
	}
	// value couldn't be found
	cout << "No";
	return false;
}

int BinaryTree::CantidadNodos()
{
	CantidadNodos(raiz);
	return cantidadNodos;
}
void BinaryTree::CantidadNodos(Nodo* reco)
{
	if (reco != NULL)
	{
		cantidadNodos++;
		CantidadNodos(reco->izq);
		CantidadNodos(reco->der);
	}
}

int BinaryTree::CantidadNodosHoja()
{
	CantidadNodosHoja(raiz);
	return cantidadNodosHoja;
}
int BinaryTree::Altura()
{
	Altura(raiz, 1);
	return altura;
}

void BinaryTree::Altura(Nodo* reco, int nivel)
{
	if (reco != NULL)
	{
		Altura(reco->izq, nivel + 1);
		if (nivel > altura)
			altura = nivel;
		Altura(reco->der, nivel + 1);
	}
}

void BinaryTree::CantidadNodosHoja(Nodo* reco)
{
	if (reco != NULL)
	{
		if (reco->izq == NULL && reco->der == NULL)
		{
			cantidadNodosHoja++;
		}
		CantidadNodosHoja(reco->izq);
		CantidadNodosHoja(reco->der);
	}
}

int BinaryTree::ImprimirMayorNodo()
{
	if (raiz != NULL)
	{
		Nodo* reco = raiz;
		while (reco->der != NULL)
			reco = reco->der;
		cout << "Mayor valor del árbol:" << reco->info;
		return reco->info;
	}
}
void BinaryTree::BorrarMenorNodo()
{
	if (raiz != NULL) 
	{
		Nodo* bor;
		if (raiz->izq == NULL)
		{
			bor = raiz;
			raiz = raiz->der;
			delete bor;
		}
		else 
		{
			Nodo* atras = raiz;
			Nodo* reco = raiz->izq;
			while (reco->izq != NULL)
			{
				atras = reco;
				reco = reco->izq;
			}
			atras->izq = reco->der;
			delete reco;
		}
	}
}

int main()
{
	BinaryTree* arbol = new BinaryTree();
	arbol->insertar(100);
	arbol->insertar(50);
	arbol->insertar(25);
	arbol->insertar(75);
	arbol->insertar(150);
	cout << "Cantidad Nodos: " << arbol->CantidadNodos() << "\n";
	cout << "Cantidad Nodos Hoja: " << arbol->CantidadNodosHoja() << "\n";
	cout << "Altura: " << arbol->Altura() << "\n";
	cout << "Impresion en entre orden junto al nivel del nodo:";
	arbol->imprimirEntreConNivel();
	arbol->ImprimirMayorNodo();
	arbol->BorrarMenorNodo();
	cout << "\nExiste 50? ";
	arbol->Existe(50);
	delete arbol;
	return 0;
}





