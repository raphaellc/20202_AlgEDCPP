#pragma once
#include "Container.h"
#include "ListaSE.h"

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

