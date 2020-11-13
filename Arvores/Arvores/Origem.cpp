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
	if(ab->buscar(10)) cout << "Encontrado" << endl;
	else cout << "N�o Encontrado" << endl;
	
	if(ab->buscar(3)) cout << "Encontrado" << endl;
	else cout << "N�o Encontrado" << endl;

	if(ab->buscar(20)) cout << "Encontrado" << endl;
	else cout << "N�o Encontrado" << endl;

	if(ab->buscar(5)) cout << "Encontrado" << endl;
	else cout << "N�o Encontrado" << endl;

	if(ab->buscar(4)) cout << "Encontrado" << endl;
	else cout << "N�o Encontrado" << endl;
	
	system("pause");
	return 0;
}
