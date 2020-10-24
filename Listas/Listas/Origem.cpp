#include "Lista.h"
#include <iostream>
#include <list>
#include "Objeto.h"
int main() {

	Lista<int> * minha_lista = new Lista<int>;
	Lista<Objeto> * objetos = new Lista<Objeto>;
	Objeto * obj1 = new Objeto();
	Objeto * obj2 = new Objeto();
	obj1->setID(1);
	obj2->setID(2);
	objetos->inserirLista(obj1);
	objetos->inserirLista(obj2);
	objetos->removerUltimoElemento();
	if (objetos->buscar(obj2) == nullptr) std::cout << "funcionou" << std::endl;
	if (objetos->buscar(obj1) == obj1)  std::cout << "funcionou" << std::endl;
	
	/*
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

	*/
	system("pause");
	return 0;
}
