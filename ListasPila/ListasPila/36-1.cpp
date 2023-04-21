#include<iostream>

using namespace std;

class LIFO
{
private:
	class Node {
	public:
		int data;
		Node* next;
	};

	Node *root;
public:
	LIFO();
	~LIFO();
	void Insert(int x);
	int Extract();
	void Print();
	int Count();
	bool isEmpty();
	int GetLastNodeData();
	int GetFirstNodeData();
};

LIFO::LIFO()
{
	root = NULL;
}

void LIFO::Insert(int x)
{
	Node* add = new Node();
	add->data = x;
	if (root == NULL)
	{
		root = add;
		add->next = NULL;
	}
	else 
	{
		add->next = root;
		root = add;
	}
}

int LIFO::Extract()
{
	if (root != NULL)
	{
		int data = root->data;
		Node* remove = root;
		root = root->next;
		delete[]remove;
		return data;
	}
	else
	{
		return -1;
	}
}
void LIFO::Print()
{
	Node* run = root;
	while (run != NULL)
	{
		cout << run->data << "-";
		run = run->next;
	}
	cout << "\n";
}

int LIFO::Count()
{
	Node* run = root;
	int count = 0;
	while (run != NULL)
	{
		count++;
		run = run->next;
	}
	return count;
}

bool LIFO::isEmpty()
{
	if (root == NULL)
	{
		return true;
	}
	else 
	{
		return false;
	}
}
int LIFO::GetFirstNodeData()
{
	if (root != NULL)
	{
		return root->data;
	}
	else
	{
		return -1;
	}
}
int LIFO::GetLastNodeData()
{
	Node* run = root;
	int data = root->data;
	while (run != NULL)
	{
		data = run->data;
		run = run->next;
	}
	return data;
}

LIFO::~LIFO()
{
	Node* run = root;
	Node* remove;
	while (run != NULL)
	{
		remove = run;
		run = run->next;
		delete remove;
	}
}



int main() 
{
	LIFO* lifo = new LIFO();
	lifo->Insert(10);
	lifo->Insert(5);
	lifo->Insert(2);
	lifo->Print();
	cout << "La cantidad de nodos de la lista LIFO es ";
	cout << lifo->Count() << "\n";

	cout << "La informacion del primer nodo es ";
	cout << lifo->GetFirstNodeData() << "\n";

	while (lifo->isEmpty() == false)
	{
		cout << "Extrayendo de la pila: " << lifo->Extract() << "\n";
	}
	delete lifo;
	return 0;
}