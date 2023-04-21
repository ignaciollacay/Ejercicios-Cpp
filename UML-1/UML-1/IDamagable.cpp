// INTERFACE morir
class IDamagable
{
public:
	virtual void RecibirDano(int dano) = 0;
	virtual void Morir() = 0;
};