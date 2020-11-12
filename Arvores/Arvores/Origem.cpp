#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "ArvoreBinaria.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");
	
	ArvoreBinaria<int> * ab = new ArvoreBinaria<int>;
	ab->inserir(10);
	ab->inserir(20);
	ab->inserir(5);
	ab->inserir(3);
	ab->visitarPreOrdem();
	
	cout << endl;
	if(ab->buscar(20)) cout << "Encontrado" << endl;
	else cout << "Não Encontrado" << endl;
	
	if(ab->buscar(4)) cout << "Econtrado" << endl;
	else cout << "Não Econtrado" << endl;
	
	system("pause");
	return 0;
}
