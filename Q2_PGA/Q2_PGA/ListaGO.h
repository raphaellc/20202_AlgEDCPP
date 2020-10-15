#pragma once
#include "Container.h"


class ListaGO
{
public:
	ListaGO();
	~ListaGO();
	ListaGO(Container *_ed);
	int buscar(int pos);
private:
	Container * estrutura_dados;
};

