//#include <iostream>
//using namespace std;
//
//class BinaryTree
//{
//private:
//	class Nodo
//	{
//	public:
//		int info;
//		Nodo* izq;
//		Nodo* der;
//	};
//	Nodo* raiz;
//
//	void borrar(Nodo* reco);
//	void imprimirPre(Nodo* reco);
//	void imprimirEntre(Nodo* reco);
//	void imprimirPost(Nodo* reco);
//public:
//	BinaryTree();
//	~BinaryTree();
//	void insertar(int x);
//	void imprimirPre();
//	void imprimirEntre();
//	void imprimirPost();
//};
//
//BinaryTree::BinaryTree()
//{
//	raiz = NULL;
//}
//
//BinaryTree::~BinaryTree()
//{
//	borrar(raiz);
//}
//
//void BinaryTree::borrar(Nodo* reco)
//{
//	if (reco != NULL)
//	{
//		// Funcion recursiva. Pasar reco al siguiente valor y volver a ejecutar.
//		// borra todos los hijos de ambos lados a partir del nodo que recibe por parametro.
//		borrar(reco->izq);
//		borrar(reco->der);
//		delete reco;
//	}
//}
//void BinaryTree::insertar(int x)
//{
//	Nodo* nuevo = new Nodo();
//	nuevo->info = x;
//	nuevo->izq = NULL;
//	nuevo->der = NULL;
//
//	// Si el árbol está vacío, apuntamos raíz al nodo creado
//	if (raiz == NULL)
//	{
//		raiz = nuevo;
//	}
//	else
//	{
//		Nodo* anterior = NULL; // 
//		Nodo* reco = raiz;
//
//		// dentro de una estructura repetitiva vamos comparando x con la información del nodo hasta encontrar un subarbol vacio
//		while (reco != NULL)
//		{
//			anterior = reco;
//
//			// si x es menor a la del nodo descendemos por el subárbol izquierdo
//			if (x < reco->info)
//				reco = reco->izq;
//			// si x es mayor a la del nodo descendemos por el subárbol derecho
//			else
//				reco = reco->der;
//		}
//		// Cuando se encuentra un subárbol vacío 
//		// insertar el nodo en dicho subárbol
//		// Del lado izquierdo o derecho segun sea mayor o menor a la informacion del nodo.
//		if (x < anterior->info)
//			anterior->izq = nuevo;
//		else
//			anterior->der = nuevo;
//	}
//}
//
//void BinaryTree::imprimirPre()
//{
//	// Ejecutar recursivamente el metodo imprimir en preorden, empezando en la raiz
//	imprimirPre(raiz);
//	cout << "\n";
//}
//void BinaryTree::imprimirPre(Nodo* reco)
//{
//	if (reco != NULL) // Condicion para salir de la funcion recursiva, llegar al ultimo nodo del arbol.
//	{
//		cout << reco->info << "-"; // Visita: Imprimir info al comienzo, antes del recorrido por cada rama
//		// Recorrer el subárbol izquierdo en preorden.
//		imprimirPre(reco->izq); // Recorrido 1 por la rama izquierda
//		// Recorrer el subárbol derecho en preorden.
//		imprimirPre(reco->der); // Recorrido 2 por la rama derecha
//	}
//}
//void BinaryTree::imprimirEntre()
//{
//	// Recorrer todo el arbol con un Imprimir recursivamente cada nodo a partir de la raiz hasta el final, 
//	// de manera ordenada
//	// Imprime el nodo izq y luego el der pasando de niveles hacia abajo.
//	imprimirEntre(raiz);
//	cout << "\n";
//}
//void BinaryTree::imprimirEntre(Nodo* reco)
//{
//	if (reco != NULL)
//	{
//		imprimirEntre(reco->izq); // Recorrido 1 por la rama izquierda
//		cout << reco->info << "-"; // Visita: Imprimir info entre medio del recorrido por cada rama
//		imprimirEntre(reco->der); // Recorrido 2 por la rama derecha
//	}
//}
//
//void BinaryTree::imprimirPost()
//{
//	imprimirPost(raiz);
//	cout << "\n";
//}
//
//void BinaryTree::imprimirPost(Nodo* reco)
//{
//	if (reco != NULL)
//	{
//		imprimirPost(reco->izq); // Recorrido 1 por la rama izquierda
//		imprimirPost(reco->der); // Recorrido 2 por la rama derecha
//		cout << reco->info << "-"; // Visita: Imprimir info al final del recorrido por ambas ramas
//	}
//}
//
//int main()
//{
//	BinaryTree* arbol = new BinaryTree();
//	arbol->insertar(100);
//	arbol->insertar(50);
//	arbol->insertar(25);
//	arbol->insertar(75);
//	arbol->insertar(150);
//	cout << "Impresion preorden: ";
//	arbol->imprimirPre();
//	cout << "Impresion entreorden: ";
//	arbol->imprimirEntre();
//	cout << "Impresion postorden: ";
//	arbol->imprimirPost();
//	delete arbol;
//	return 0;
//}
//
//
//
//
//
