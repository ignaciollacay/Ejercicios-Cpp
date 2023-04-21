#include <iostream>
#include <string>
#include <memory>

using namespace std;


class Auto
{
public:
	Auto(string marca, string modelo) { this->marca = marca; this->modelo = modelo; };
	void MostrarDatos();
private:
	string marca;
	string modelo;
};

void Auto::MostrarDatos()
{
	cout << "Marca: " << marca << ". Modelo: " << modelo;
}


int main()
{
	//shared_ptr<Auto> auto1(new Auto("Ford", "Mustang"));
	shared_ptr<Auto> auto1 = make_shared<Auto>("Ford", "Mustang");
	auto1->MostrarDatos();

	return 0;
}