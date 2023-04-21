#include "Soldado.cpp" // Modelo
#include "MenuVista.cpp" // interface del menu presentador

// Presentador
class MenuPresentador
{
public:
	MenuPresentador(Soldado* soldado, MenuVista* menuVista) {
		this->soldado = soldado;
		this->menuVista = menuVista;
		ActivarMenu();
	}
	~MenuPresentador() {
		delete soldado;
		delete menuVista;
	}

	void ActivarMenu() {
		if (menu == 0)
		{
			menuVista->MostrarAcciones();
			AccionSoldado();
		}
		else if (menu == 1) 
		{
			menuVista->MostrarArmas();
			EleccionArma();
		}
	}
	void AccionSoldado() {
		char input;
		bool isValid = false;
		do
		{
			input = menuVista->GetInput();

			if (input == '1') {
				isValid = true;
				menu = 1;
				cout << "\n";
				ActivarMenu();
			}
			else if (input == '2') {
				isValid = true;
				soldado->Dejar();
				AccionSoldado();
			}
			else if (input == '3') {
				isValid = true;
				soldado->Disparar();
				AccionSoldado();
			}
			else if (input == '4') {
				isValid = true;
				soldado->VerArma();
				AccionSoldado();
			}
			else if (input == 'x') {
				isValid = true;
				menu = 2;
				ActivarMenu();
			}
		} while (!isValid);
	}
	void EleccionArma() {
		char input;
		bool isValid = false;
		do
		{
			input = menuVista->GetInput();

			if (input == '1') {
				soldado->Recoger(new Revolver());
				isValid = true;
				EleccionArma();
			}
			else if (input == '2') {
				soldado->Recoger(new Rifle());
				isValid = true;
				EleccionArma();
			}
			else if (input == '3') {
				soldado->Recoger(new Escopeta());
				isValid = true;
				EleccionArma();
			}
			else if (input == 'x') {
				cout << "\n";
				isValid = true;
				menu = 0;
				ActivarMenu();
			}
		} while (!isValid);
	}
private:
	Soldado* soldado;
	MenuVista* menuVista;
	int menu = 0;
};