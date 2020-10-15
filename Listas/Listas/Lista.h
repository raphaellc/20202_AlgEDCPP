#pragma once
#include "No.h"
template <typename tipoElemento>
class Lista
{
public: 
	Lista();
	~Lista();
	void inserirLista(tipoElemento elemento);
	void removerUltimoElemento();
	tipoElemento buscarElementoPos(int pos);
	bool listaVazia();
	void percorrerLista(); //vai percorrer todos elementos da lista
	int quantidadeElementos(); //devolve quantos nos tem na lista
	tipoElemento obterPrimeiroElemento(); //Devolve o dado do primeiro no da lista
	tipoElemento obterUltimoElemento(); //Devolve o dado do ultimo elemento

private:
	
	No<tipoElemento>* inicio_lista;
	No<tipoElemento>* final_lista;
	int qtd_elementos;
	
};

template <typename tipoElemento>
Lista<tipoElemento>::Lista()
{
	qtd_elementos = 0;
	inicio_lista = nullptr;
	final_lista = nullptr;
}
template <typename tipoElemento>
Lista<tipoElemento>::~Lista()
{
}
template <typename tipoElemento>
void Lista<tipoElemento>::inserirLista(tipoElemento elemento)
{
	//Define o n� e insere o elemento no n�
	//encapsulda o dado no n�
	No<tipoElemento> * n = new No<tipoElemento>;
	n->setDado(elemento);
	//insere o n� na lista
	//caso a lista esteja vazia
	if (listaVazia()) {
		inicio_lista = n;
		final_lista = n;
	}
	else {//caso n�o esteja vazia
				
		final_lista->setProximo(n);
		n->setAnterior(final_lista);
		final_lista = n;
		n->setProximo(inicio_lista);
	}
	inicio_lista->setAnterior(final_lista);
	final_lista->setProximo(inicio_lista);
	qtd_elementos++;
}
template <typename tipoElemento>
void Lista<tipoElemento>::removerUltimoElemento()
{
	//se lista vazia n�o faz nada

	if (inicio_lista != nullptr) {
		No<tipoElemento>* aux = inicio_lista;
		No<tipoElemento>* aux_ant = inicio_lista;

		while (aux->getProximo() != nullptr) {
			aux_ant = aux;
			aux = aux->getProximo();
		}
		//aux est� no �ltimo n� e aux_ant est� no pen�ltimo
		delete aux;
		aux_ant->setProximo(nullptr);
	}
	qtd_elementos--;
}
template <typename tipoElemento>
tipoElemento Lista<tipoElemento>::buscarElementoPos(int pos)
{
	if (inicio_lista != nullptr && (qtd_elementos - 1) >= pos) {
		int indice = 0;
		No<tipoElemento>* aux = inicio_lista;
		while (indice != pos) {
			aux = aux->getProximo();
			indice++;
		}
		return aux->getDado();
	}
	return -1;//ou lista � vazia, ou posi��o � maior que quantidade de elementos

}
template <typename tipoElemento>
bool Lista<tipoElemento>::listaVazia()
{
	if (inicio_lista == nullptr)
		return true;
	else
		return false;

}
template <typename tipoElemento>
void Lista<tipoElemento>::percorrerLista()
{
}
template <typename tipoElemento>
int Lista<tipoElemento>::quantidadeElementos()
{
	return qtd_elementos;
}
template <typename tipoElemento>
tipoElemento Lista<tipoElemento>::obterPrimeiroElemento()
{
	if (inicio_lista != nullptr)
		return inicio_lista->getDado();
	return -1;
}
template <typename tipoElemento>
tipoElemento Lista<tipoElemento>::obterUltimoElemento()
{
	if (inicio_lista != nullptr) {
		No<tipoElemento>* aux = inicio_lista;
		while (aux->getProximo() != nullptr)
			aux = aux->getProximo();
		return aux->getDado();
	}
	return -1;
}