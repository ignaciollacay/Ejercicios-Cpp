#include <iostream>
#include "Soldado.cpp"
using namespace std;

// Vista? Separar Modelo?
class Menu
{
public:
	Menu(Soldado* soldado) {
		this->soldado = soldado;
		cout << "-== Bienvenido al campo de entrenamiento, Soldado ==-" << endl << "\n";
		MostrarUI();
	}
	void MostrarUI() {
		if (menu == 0)
			MensajeHacer();
		else if (menu == 1)
			MensajeArma();
		else
			return;
		GetInput();
	}
	void GetInput() {
		if (menu == 0)
			InputHacer();
		if (menu == 1)
			InputArma();
	}

private:
	Soldado* soldado;
	int menu = 0;
	void InputHacer() {
		char input;
		bool isValid = false;
		do
		{
			cout << "Input: ";
			cin >> input;

			if (input == '1') {
				isValid = true;
				menu = 1;
				cout << "\n";
				MostrarUI();
			}
			else if (input == '2') {
				isValid = true;
				soldado->Dejar();
				InputHacer();
			}
			else if (input == '3') {
				isValid = true;
				soldado->Disparar();
				InputHacer();
			}
			else if (input == '4') {
				isValid = true;
				soldado->VerArma();
				InputHacer();
			}
			else if (input == 'x') {
				isValid = true;
				menu = 2;
				MostrarUI();
			}
		} while (!isValid);
	}
	void InputArma() {
		char input;
		bool isValid = false;
		do
		{
			cout << "Input: ";
			cin >> input;

			if (input == '1') {
				soldado->Recoger(new Revolver());
				isValid = true;
				InputArma();
			}
			else if (input == '2') {
				soldado->Recoger(new Rifle());
				isValid = true;
				InputArma();
			}
			else if (input == '3') {
				soldado->Recoger(new Escopeta());
				isValid = true;
				InputArma();
			}
			else if (input == 'x') {
				cout << "\n";
				isValid = true;
				menu = 0;
				MostrarUI();
			}
		} while (!isValid);
	}
	void MensajeHacer() {
		if (menu == 0) {
			cout << "Que desea hacer?" << endl << "(presione el numero correspondiente a la opcion del menu)" << endl << "\n"
				<< "1- Recoger arma" << endl
				<< "2- Dejar arma" << endl
				<< "3- Disparar" << endl
				<< "4- Ver arma en uso" << endl
				<< "X- Salir" << endl;
		}
	}
	void MensajeArma() {
		cout << "Por favor escoja el arma que desea utilizar:" << endl << "\n"
			<< "1- Revolver" << endl
			<< "2- Rifle" << endl
			<< "3- Escopeta" << endl
			<< "X- Volver atras" << endl;
	}
};