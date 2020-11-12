
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
	
	system("pause");
	return 0;
}
