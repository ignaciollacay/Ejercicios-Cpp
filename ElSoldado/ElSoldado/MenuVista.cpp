#include <iostream>
#include "IVista.cpp" // interface del menu presentador

using namespace std;

// Vista
class MenuVista : IVista
{
public:
	MenuVista() {
		cout << "-== Bienvenido al campo de entrenamiento, Soldado ==-" << endl << "\n";
	}
	int GetInput()
	{
		char input;
		cout << "Input: ";
		cin >> input;
		return input;
	}

	void MostrarAcciones() {
		cout << "Que desea hacer?" << endl << "(presione el numero correspondiente a la opcion del menu)" << endl << "\n"
			<< "1- Recoger arma" << endl
			<< "2- Dejar arma" << endl
			<< "3- Disparar" << endl
			<< "4- Ver arma en uso" << endl
			<< "X- Salir" << endl;
	}
	void MostrarArmas() {
		cout << "Por favor escoja el arma que desea utilizar:" << endl << "\n"
			<< "1- Revolver" << endl
			<< "2- Rifle" << endl
			<< "3- Escopeta" << endl
			<< "X- Volver atras" << endl;
	}
};