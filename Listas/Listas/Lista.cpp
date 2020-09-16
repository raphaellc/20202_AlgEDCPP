#include "Lista.h"

void Lista::inserirLista(int elemento)
{
	//Define o n� e insere o elemento no n�
	//encapsulda o dado no n�
	No * n = new No;
	n->setDado(elemento);
	//insere o n� na lista
	//caso a lista esteja vazia
	if (listaVazia()) {
		inicio_lista = n;
	}
	else {//caso n�o esteja vazia
		//encontrar o �ltimo n� da lista
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
