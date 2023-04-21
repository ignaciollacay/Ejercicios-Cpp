#include<iostream>
using namespace std;

int main()
{
	float f1, f2;
	float* pun1;
	
	cout << "f1: ";	cin >> f1;
	cout << "f2: ";	cin >> f2;

	pun1 = &f1;
	cout << "Puntero apunta a f1 de valor: " << *pun1 << "\n";
	pun1 = &f2;
	cout << "Puntero apunta a f2 de valor: " << *pun1 << "\n";

	float oldf2 = f2;
	*pun1 = f1;
	cout << "Puntero asigna en f2 valor f1: " << f2 << "\n";
	pun1 = &f1;
	*pun1 = oldf2;
	cout << "Puntero asigna en f1 valor f2: " << f1;

	return 0;
};