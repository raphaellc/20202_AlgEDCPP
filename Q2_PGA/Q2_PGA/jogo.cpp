#include "ListaGO.h"
#include "ListaSE.h"

int main()
{
	//Contexto do Jogo
	ListaSE * lista_simples_encad = new ListaSE;

	ListaGO * lgo = new ListaGO(lista_simples_encad);
	lgo->buscar(10);
	ListaGO * lgo11111 = new ListaGO();
}