#include <iostream>
#include "Arma.cpp"
using namespace std;

// Presentador?
class Soldado
{
public:
	Soldado() { arma = nullptr; }
	void Recoger(Arma* arma) { // unique pointer param?
		if (this->arma == nullptr)
		{
			cout << "Recoges un arma." << endl;
			this->arma = arma;
		}
		else
			cout << "Solo puede tener un arma al mismo tiempo." << endl;
	}
	void Dejar() {
		if (this->arma != nullptr)
		{
			this->arma = nullptr; // delete old arma?
			cout << "Dejas tu arma." << endl << "\n";
		}
		else
			cout << "No tienes una arma en tu poder para dejar." << endl;
	}
	void VerArma() {
		if (this->arma != nullptr)
			cout << "Tienes " << arma->GetNombre() << " en tu poder." << endl;
		else
			cout << "No tiene ningun arma en su poder." << endl;
	}
	void Disparar() {
		if (this->arma != nullptr)
			cout << arma->GetDisparo() << endl;
		else
			cout << "Debes recoger un arma para poder disparar." << endl;
	}
private:
	Arma* arma; //Dependencia (asociacion dirigida)
};