#include "Lista.h"

Lista::Lista()
{
	qtd_elementos = 0;
}

Lista::~Lista()
{
}

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
	qtd_elementos++;
}

void Lista::removerUltimoElemento()
{
	//se lista vazia n�o faz nada
	
	if (inicio_lista != nullptr) {
		No* aux = inicio_lista;
		No* aux_ant = inicio_lista;
		
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

int Lista::buscarElementoPos(int pos)
{
	if (inicio_lista != nullptr && (qtd_elementos-1) >=  pos) {
		int indice = 0;
		No* aux = inicio_lista;
		while (indice != pos) {
			aux = aux->getProximo();
			indice++;
		}
		return aux->getDado();
	}
	return -1;//ou lista � vazia, ou posi��o � maior que quantidade de elementos
	
}

bool Lista::listaVazia()
{
	if (inicio_lista == nullptr)
		return true;
	else
		return false;

}

void Lista::percorrerLista()
{
}

int Lista::quantidadeElementos()
{
	return qtd_elementos;
}

int Lista::obterPrimeiroElemento()
{
	if (inicio_lista != nullptr)
		return inicio_lista->getDado();
	return -1;
}

int Lista::obterUltimoElemento()
{
	if (inicio_lista != nullptr) {
		No* aux = inicio_lista;
		while (aux->getProximo() != nullptr)
			aux = aux->getProximo();
		return aux->getDado();
	}
	return -1;
}
