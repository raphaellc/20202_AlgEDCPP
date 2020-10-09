#include "Lista.h"
#include <iostream>
#include <list>
void main() {
	std::list<int> * ml = new std::list<int>;
	ml->push_front(19);
	ml->push_back(19);
	ml->back();
	ml->front();
	ml->size();
	ml->pop_back();
	ml->pop_front();
	Lista<char> * minha_lista = new Lista<char>;
	Lista<char> * chars = new Lista<char>;
		
	minha_lista->inserirLista(10);
	minha_lista->inserirLista(11);
	minha_lista->inserirLista(14);
	minha_lista->inserirLista(-1);
	std::cout << minha_lista->quantidadeElementos() << std::endl;
	
	minha_lista->removerUltimoElemento();

	std::cout <<"\n removi um elemento: " << minha_lista->quantidadeElementos() << std::endl;
	minha_lista->inserirLista(14);
	
	std::cout << minha_lista->quantidadeElementos() << std::endl;
	std::cout << "Posicao(0): "<< minha_lista->buscarElementoPos(0) << std::endl; //10
	std::cout << "Posicao(1): "<< minha_lista->buscarElementoPos(1) << std::endl; //11
	std::cout << "Posicao(2): "<< minha_lista->buscarElementoPos(2) << std::endl; //14
	std::cout << "Posicao(3): "<< minha_lista->buscarElementoPos(3) << std::endl; //-1

}
