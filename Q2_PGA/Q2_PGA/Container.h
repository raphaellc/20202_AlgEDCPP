#pragma once
class Container
{
public:
	Container();
	~Container();
	virtual int buscar(int pos) = 0;
	virtual void deletar(int pos) = 0;
	virtual bool estaVazia() = 0;
	virtual void inserir(int elemento) = 0;
	virtual int tamanho() = 0;
};

