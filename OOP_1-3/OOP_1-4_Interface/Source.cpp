#include <iostream>
using namespace std;

class SerVivo
{
public:
	virtual void Respiro() {};
	virtual void MeAlimento() {};
	virtual void Habito() {};
	virtual void MeReproduzco() {};
	virtual void MeDesplazo() {};
	void ImprimirDatosSerVivo(SerVivo& sv);
	string resp;
	string alim;
	string habi;
	string pari;
	string clas;
	string piel;
};

class Ave : public SerVivo
{
public:
	Ave(string respiracion, string alimentacion, string habitat, string paridad, string clasificacion, string p, string plum, string pic, int dedos);
protected:
	string plumas = "de vuelo"; // contorno, relleno,
	string pico = "largo y delagado";
	int dedosPata = 3;
};

class Mamifero : public SerVivo
{
public:
	Mamifero(string respiracion, string alimentacion, string habitat, string paridad, string clasificacion, string p, string dent, int pat);
protected:
	string denticion;
	int patas = 4;
};

class Reptil : public SerVivo
{
public:
	Reptil(string respiracion, string alimentacion, string habitat, string paridad, string clasificacion, string p, string esca = "lisas", bool ven = false, int pat = 2);
protected:
	string escamas = "lisas"; //escamas lisas, escamas quilladas y escamas en forma de quilla
	bool veneno = false; 
	int patas = 2;
};

class Anfibio : public SerVivo
{
public:
	Anfibio(string respiracion, string alimentacion, string habitat, string paridad, string clasificacion, string p, bool ven, int pat, int dedos);
protected:
	//string piel = "humeda y permeable";
	bool veneno = false;
	int patas = 4;
	int dedosPata = 5;
};
class Pez : public SerVivo
{
public:
	Pez(string respiracion, string alimentacion, string habitat, string paridad, string clasificacion, string p, int aCant, string aPos);
protected:
	//string piel = "escamas";
	int aletasCant = 2;
	string aletasPos = "dorsal";  //dorsal fins, anal fins, pectoral fins, and pelvic fins.
};

class Loro : public Ave
{
public:
	Loro() : Ave("pulmonar", "omnivoros", "bosque", "oviparidad", "aereo", "plumaje suave", "de vuelo", "pequeño y curvo", 3) {}

	void Respiro()
	{
		cout << "El loro respira por " << resp << endl;
	}
	void MeAlimento()
	{
		cout << "El loro se alimenta con el pico " << pico << " del tipo " << alim << endl;
	}
	void Habito()
	{
		cout << "El loro habita en el " << habi << endl;
	}
	void MeReproduzco()
	{
		cout << "El loro se reproduce mediante " << pari << endl;
	}
	void MeDesplazo()
	{
		cout << "El loro se desplaza por el medio " << clas << "con un " << piel << " " << plumas << " y tiene " << dedosPata << " dedos en cada pata" << endl;
	}
};

class Oso : public Mamifero
{
public:
	Oso() : Mamifero("pulmonar", "omnivoros", "bosque", "viviparidad", "terrestre", "pelaje", "caninos", 4) {}
	void Respiro()
	{
		cout << "El Oso respira por " << resp << endl;
	}
	void MeAlimento()
	{
		cout << "El Oso se alimenta con " << denticion << " del tipo " << alim << endl;
	}
	void Habito()
	{
		cout << "El Oso habita en el " << habi << endl;
	}
	void MeReproduzco()
	{
		cout << "El Oso se reproduce mediante " << pari << endl;
	}
	void MeDesplazo()
	{
		cout << "El Oso se desplaza por el medio " << clas << "con un " << piel << " " << " y tiene " << patas << " patas" << endl;
	}
};
class Serpiente : public Reptil
{
public: 
	Serpiente() : Reptil("pulmonar", "carnivoros", "desierto", "oviparidad", "terrestre", "escamas", "lisas", true, 0) {}
	void Respiro()
	{
		cout << "La Serpiente respira por " << resp << endl;
	}
	void MeAlimento()
	{
		cout << "La Serpiente se alimenta utilizando " << veneno << " y es del tipo " << alim << endl;
	}
	void Habito()
	{
		cout << "La Serpiente habita en el " << habi << endl;
	}
	void MeReproduzco()
	{
		cout << "La Serpiente se reproduce mediante " << pari << endl;
	}
	void MeDesplazo()
	{
		cout << "La Serpiente se desplaza por el medio " << clas << "con un " << piel << " " << " y tiene " << patas << " patas" << endl;
	}
};
class Rana : public Anfibio
{
	Rana() : Anfibio("cutanea", "insectivoros", "pantano", "oviparidad", "terrestre", "humeda", true, 2, 5) {}
};
class Tiburon : public Pez
{
public:
	Tiburon() : Pez("branqueal", "carnivoros", "oceano", "oviparidad", "acuatico", "escamas", 2, "dorsal, pectoral, ventreal y caudal") {}

};



int main()
{
	Loro* loro1 = new Loro();
	loro1->ImprimirDatosSerVivo(*loro1);
	delete loro1;
	Oso* oso = new Oso();
	oso->ImprimirDatosSerVivo(*oso);
	delete oso;
	Serpiente* serpiente = new Serpiente();
	serpiente->ImprimirDatosSerVivo(*serpiente);
	delete serpiente;

	return 0;
}

Ave::Ave(string respiracion, string alimentacion, string habitat, string paridad, string clasificacion, string p, string plum, string pic, int dedos)
{
	resp = respiracion; alim = alimentacion; habi = habitat; pari = paridad, clas = clasificacion, piel = p, pico = pic, dedosPata = dedos;
}

Mamifero::Mamifero(string respiracion, string alimentacion, string habitat, string paridad, string clasificacion, string p, string dent, int pat)
{
	resp = respiracion; alim = alimentacion; habi = habitat; pari = paridad, clas = clasificacion, piel = p, denticion = dent, patas = pat;
}

Reptil::Reptil(string respiracion, string alimentacion, string habitat, string paridad, string clasificacion, string p, string esca, bool ven, int pat)
{
	resp = respiracion; alim = alimentacion; habi = habitat; pari = paridad, clas = clasificacion, piel = p, escamas = esca; veneno = ven, patas = pat;
}

Anfibio::Anfibio(string respiracion, string alimentacion, string habitat, string paridad, string clasificacion, string p, bool ven, int pat, int dedos)
{
	resp = respiracion; alim = alimentacion; habi = habitat; pari = paridad, clas = clasificacion, piel = p, veneno = ven, patas = pat, dedosPata = dedos;
}

Pez::Pez(string respiracion, string alimentacion, string habitat, string paridad, string clasificacion, string p, int aCant, string aPos)
{
	resp = respiracion; alim = alimentacion; habi = habitat; pari = paridad, clas = clasificacion, piel = p, aletasCant = aCant, aletasPos = aPos;
}

void SerVivo::ImprimirDatosSerVivo(SerVivo& sv)
{
	sv.Respiro();
	sv.MeAlimento();
	sv.Habito();
	sv.MeReproduzco();
	sv.MeDesplazo();
}