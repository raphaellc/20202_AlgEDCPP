#include "ListaGO.h"




ListaGO::ListaGO()
{
	estrutura_dados = nullptr;
}


ListaGO::~ListaGO()
{
}

int ListaGO::buscar(int pos)
{
	return estrutura_dados->buscar(pos);
}
