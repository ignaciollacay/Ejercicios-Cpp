// Interface del Presentador para ser implementada en la Vista
class IVista
{
	virtual void MostrarAcciones() = 0;
	virtual void MostrarArmas() = 0;
	virtual int GetInput() = 0;
};