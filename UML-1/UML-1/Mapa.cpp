#include "Unidad.cpp"

class Mapa {
private:
    int tamano;
public:
    Mapa();
    ~Mapa();
    void moverUnidad(Unidad& unidad, int x, int y);
};

Mapa::Mapa()
{
    tamano = 20;
    cout << "Mapa creado" << endl;
}

Mapa::~Mapa()
{
}

void Mapa::moverUnidad(Unidad& unidad, int x, int y)
{
    cout << "Unidad movida a (" << x << ", " << y << ")" << endl;
}
