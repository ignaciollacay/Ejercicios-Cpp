#include <iostream>;

using namespace std;


class Turbina
{
	int turbinas = 0;
public:
	Turbina() { };
	Turbina(int t) { this->turbinas = t; };
	void Info() { cout << turbinas << " turbinas.\n"; };
};

class Helice
{
public:
	enum class Tipo { frontal, superior };
	Helice() { };
	Helice(int cant, Tipo tipo) { this->helices = cant; this->tipo = tipo; };
	void Info() { cout << helices << " helices ";
	if (tipo == Tipo::frontal)
		cout << "frontal";
	else
		cout << "superior";
	cout << ".\n"; };
private:
	int helices = 0;
	Tipo tipo = Tipo::frontal;
};

class TrenDeAterrizaje
{
public:
	enum class Tipo { fijo, retractil };
	TrenDeAterrizaje() { };
	TrenDeAterrizaje(Tipo tipo, int neumaticos, int amortiguadores) { this->tipo = tipo; this->neumaticos = neumaticos; this->amortiguadores = amortiguadores; };
	void Info() { cout << "Tren de aterrizaje es ";  tipo == Tipo::fijo ? cout << "fijo" : cout << "retroactil"; cout << ", tiene " << neumaticos << " neumaticos y " << amortiguadores << " amortiguadores.\n"; };
private:
	Tipo tipo = Tipo::fijo;
	int neumaticos = 0;
	int amortiguadores = 0;
};

class Alas
{
	int frontales = 0;
	int alerones = 0;
public:
	Alas() { };
	Alas(int f, int a) { this->frontales = f; this->alerones = a; };
	void Info() { cout << "Alas: " << frontales << " frontales y " << alerones << " alerones\n"; };
};

class Cubierta
{
	bool cabinaVuelo;
	bool cabinaTripulacion;
	bool sistemaEmergencia;
	int tanqueCombustible;
	int asientos;
	int banos;
	int salidas;
	int cocineta;
public:
	Cubierta() { };
	Cubierta(bool cabinaVuelo, bool cabinaTripulacion, bool emergencia, int tanque, int asientos, int banos, int salidas, int cocineta) {
		this->cabinaVuelo = cabinaVuelo; this->cabinaTripulacion = cabinaTripulacion; this->sistemaEmergencia = emergencia, this->tanqueCombustible = tanque;
		this->asientos = asientos; this->banos = banos; this->salidas = salidas; this->cocineta = cocineta;	};
	void Info() 
	{ 
		cout << "La cubierta cuenta con ";
		if (cabinaVuelo)
			cout << "cabina de vuelo, ";
		if (cabinaTripulacion)
			cout << "cabina de tripulacion, ";
		if (sistemaEmergencia)
			cout << "sistema de emergencia, ";
		cout << tanqueCombustible << " tanques de combustible, " << asientos << " asientos, " << banos << " banios, " << salidas << " salidas";
		if (cocineta > 0)
			cout << " y " << cocineta << " cocineta";
	};
};

class Aeroplano
{
public:
	Aeroplano(Helice helice, TrenDeAterrizaje tren, Alas alas, Cubierta cubierta) { this->helice = helice; this->tren = tren; this->alas = alas; this->cubierta = cubierta; };
	void prinInfo() { cout << "Aeroplano: \n"; helice.Info(); tren.Info(); alas.Info(); cubierta.Info(); cout << "\n"; };
private:
	Helice helice;
	TrenDeAterrizaje tren;
	Alas alas;
	Cubierta cubierta;
};

class Jet 
{
public:
	Jet(Turbina t, TrenDeAterrizaje tren, Alas alas, Cubierta cubierta) { this->turbinas = t; this->tren = tren; this->alas = alas, this->cubierta = cubierta; };
	void prinInfo() { cout << "Jet: \n"; turbinas.Info(); tren.Info(); alas.Info(); cubierta.Info(); cout << "\n"; };
private: 
	Turbina turbinas;
	TrenDeAterrizaje tren;
	Alas alas;
	Cubierta cubierta;
};

class Dron
{
public:
	Dron(Helice h) { helices = h; };
	void prinInfo() { cout << "Dron:\n"; helices.Info(); cout << "\n"; };
private:
	Helice helices;
};

int main()
{
	Aeroplano a = Aeroplano(
		Helice(2, Helice::Tipo::frontal),
		TrenDeAterrizaje(TrenDeAterrizaje::Tipo::fijo, 3, 3),
		Alas(2, 3),
		Cubierta(true, true, false, 2, 15, 1, 2, 0)
		);
	a.prinInfo();

	Jet j = Jet(
		Turbina(4),
		TrenDeAterrizaje(TrenDeAterrizaje::Tipo::retractil, 6, 6),
		Alas(2, 5),
		Cubierta(true, true, true, 10, 150, 2, 6, 1)
	);
	j.prinInfo();

	Dron d = Dron(Helice(4, Helice::Tipo::superior));
	d.prinInfo();

	return 0;
}