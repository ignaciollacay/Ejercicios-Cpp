#include <iostream>
#include <string>

using namespace std;

// ej 1
int main1()
{
	string palabra;
	cout << "Escriba una palabra: ";
	cin >> palabra;
	for (int i = 1; i < palabra.size(); i++)
	{
		palabra.insert(i, "-");
		i++;
	}
	cout << palabra << "\n";

	return 0;
}
	
// ej 2
int main2()
{
	string oracion;
	cout << "Escriba una oracion: ";
	getline(cin, oracion);
	for (int i = 0; i < oracion.length(); i++)
	{
		if (oracion[i] == ' ')
		{
			oracion.erase(i, 1);
			i--;
		}
	}
	cout << oracion;

	return 0;
}