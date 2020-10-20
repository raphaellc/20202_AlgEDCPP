#include "Lista.h"
#include <iostream>
#include <list>
int main() {

	Lista<int> * minha_lista = new Lista<int>;
	Lista<char> * chars = new Lista<char>;
	int a, b, c, d;
	a = 10;
	b = 11;
	c = 13;
	d = 14;
	minha_lista->inserirLista(&a);
	minha_lista->inserirLista(&b);
	minha_lista->inserirLista(&c);
	minha_lista->inserirLista(&d);
	std::cout << minha_lista->quantidadeElementos() << std::endl;
	
	minha_lista->removerUltimoElemento();

	std::cout <<"\n removi um elemento: " << minha_lista->quantidadeElementos() << std::endl;
	minha_lista->inserirLista(&d);
	
	std::cout << minha_lista->quantidadeElementos() << std::endl;
	std::cout << "Posicao(0): "<< minha_lista->buscarElementoPos(0) << std::endl; //10
	std::cout << "Posicao(1): "<< minha_lista->buscarElementoPos(1) << std::endl; //11
	std::cout << "Posicao(2): "<< minha_lista->buscarElementoPos(2) << std::endl; //14
	std::cout << "Posicao(3): "<< minha_lista->buscarElementoPos(3) << std::endl; //-1

	
	return 0;
}
