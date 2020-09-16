#include "Lista.h"

void Lista::inserirLista(int elemento)
{
	//Define o nó e insere o elemento no nó
	//encapsulda o dado no nó
	No * n = new No;
	n->setDado(elemento);
	//insere o nó na lista
	//caso a lista esteja vazia
	if (listaVazia()) {
		inicio_lista = n;
	}
	else {//caso não esteja vazia
		//encontrar o último nó da lista
		No * aux = inicio_lista;
		while (aux->getProximo() != nullptr) {
			aux = aux->getProximo();
		}
		aux->setProximo(n);
	}
	
}

bool Lista::listaVazia()
{
	if (inicio_lista == nullptr)
		return true;
	else
		return false;

}
