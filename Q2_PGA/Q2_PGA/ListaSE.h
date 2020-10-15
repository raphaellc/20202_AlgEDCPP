#pragma once
#include "Container.h"
class ListaSE :
	public Container
{
public:
	ListaSE();
	~ListaSE();
	int buscar(int pos) override;
	void deletar(int pos) override;
	bool estaVazia() override;
	void inserir(int elemento) override;
	int tamanho() override;
};

