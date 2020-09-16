#pragma once
#include "No.h"
class Lista
{
public: 
	Lista();
	~Lista();
	void inserirLista(int elemento);
	void removerLista();
	int buscarLista(int pos); 
	bool listaVazia();
	void percorrerLista(); //vai percorrer todos elementos da lista
	int quantidadeElementos(); //devolve quantos nos tem na lista
	int obterPrimeiroElemento(); //Devolve o dado do primeiro no da lista
	int obterUltimoElemento(); //Devolve o dado do ultimo elemento

private:
	
	No* inicio_lista;
	
};
