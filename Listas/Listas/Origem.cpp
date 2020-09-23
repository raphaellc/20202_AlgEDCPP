#include "Lista.h"
#include <iostream>
void main() {

	Lista * minha_lista = new Lista;
	minha_lista->inserirLista(10);
	minha_lista->inserirLista(11);
	minha_lista->inserirLista(12);

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
