#include <iostream>
using namespace std;

class CompTecnicaEspecial {
public:
    CompTecnicaEspecial() {}
    ~CompTecnicaEspecial() {}
    virtual void tecnicaEspecial() = 0;
};

class CompGolpePatada {
public:
    CompGolpePatada() {}
    ~CompGolpePatada() {}
    virtual void patada() = 0;
};

class CompPoder {
public:
    CompPoder() {}
    ~CompPoder() {}
    virtual void poder() = 0;
};

class Luchador
{
public:
    Luchador() {}
    ~Luchador() {}
    CompTecnicaEspecial* compTecnicaEspecial;
    CompGolpePatada* compGolpePatada;
    CompPoder* compPoder;
    virtual void saludo() {}
    void ejecutarEspecial() { compTecnicaEspecial->tecnicaEspecial(); }
    void ejecutarPatada() { compGolpePatada->patada(); }
    void ejecutarPoder() { compPoder->poder(); }
};

// tecnicas especiales
class Genkidama : public CompTecnicaEspecial {
public:
    Genkidama() {}
    ~Genkidama() {}
    void tecnicaEspecial() { cout << "Genkidama!" << endl; };
};
class Rasengan : public CompTecnicaEspecial {
public:
    Rasengan() {}
    ~Rasengan() {}
    void tecnicaEspecial() { cout << "Rasengan!" << endl; };
};
class Expeliarmus : public CompTecnicaEspecial {
public:
    Expeliarmus() {}
    ~Expeliarmus() {}
    void tecnicaEspecial() { cout << "Expeliarmus!" << endl; };
};

// patadas
class PatadaGoku : public CompGolpePatada {
public:
    PatadaGoku() {}
    ~PatadaGoku() {}
    void patada() { cout << "patada goku" << endl; };
};
class PatadaClones : public CompGolpePatada {
public:
    PatadaClones() {}
    ~PatadaClones() {}
    void patada() { cout << "patada de los mil clones" << endl; };
};
class PatadaNormal : public CompGolpePatada {
public:
    PatadaNormal() {}
    ~PatadaNormal() {}
    void patada() { cout << "patada normal" << endl; };
};

// poderes
class Kamehameha : public CompPoder {
public:
    Kamehameha() {}
    ~Kamehameha() {}
    void poder() { cout << "Kame hame ha!" << endl; };
}; 
class MilClones : public CompPoder {
public:
    MilClones() {}
    ~MilClones() {}
    void poder() { cout << "Tecnica de los Mil Clones!" << endl; };
};
class Wingardium : public CompPoder {
public:
    Wingardium() {}
    ~Wingardium() {}
    void poder() { cout << "Wingardium Leviousa!" << endl; };
};

// luchadores
class Goku : public Luchador
{
public:
    Goku();
    ~Goku();
    void saludo() override { cout << "Saludo Goku" << endl; }
};
class Naruto : public Luchador
{
public:
    Naruto();
    ~Naruto();
    void saludo() override { cout << "Saludo Naruto" << endl; }
};
class HarryPotter : public Luchador
{
public:
    HarryPotter();
    ~HarryPotter();
    void saludo() override { cout << "Saludo Harry Potter" << endl; }
};

// implementaciones
Goku::Goku()
{
    compTecnicaEspecial = new Genkidama();
    compGolpePatada = new PatadaGoku();
    compPoder = new Kamehameha();
}
Goku::~Goku()
{
    delete compTecnicaEspecial;
    delete compGolpePatada;
    delete compPoder;
}
Naruto::Naruto()
{
    compTecnicaEspecial = new Rasengan();
    compGolpePatada = new PatadaClones();
    compPoder = new MilClones();
}
Naruto::~Naruto()
{
    delete compTecnicaEspecial;
    delete compGolpePatada;
    delete compPoder;
}
HarryPotter::HarryPotter()
{
    compTecnicaEspecial = new Expeliarmus();
    compGolpePatada = new PatadaNormal();
    compPoder = new Wingardium();
}
HarryPotter::~HarryPotter()
{
    delete compTecnicaEspecial;
    delete compGolpePatada;
    delete compPoder;
}


int main()
{
    Goku* goku = new Goku();
    Naruto* naruto = new Naruto();
    HarryPotter* potter = new HarryPotter();

    goku->saludo();
    goku->ejecutarEspecial();
    goku->ejecutarPatada();
    goku->ejecutarPoder();
    naruto->saludo();
    naruto->ejecutarEspecial();
    naruto->ejecutarPatada();
    naruto->ejecutarPoder();
    potter->saludo();
    potter->ejecutarEspecial();
    potter->ejecutarPatada();
    potter->ejecutarPoder();

    delete goku;
    delete naruto;
    delete potter;

    return 0;
}


