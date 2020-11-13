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
	ab->inserir(4);
	ab->inserir(21);
	ab->visitarPreOrdem();
	ab->deletar(5);	
	ab->visitarPreOrdem();
	ab->deletar(3);	
	ab->visitarPreOrdem();
	ab->deletar(20);	
	ab->visitarPreOrdem();
	cout << endl;

	/*
	       10
		  /	 \
	     5    20
		/ \		\
	   3   4	 21
	       
		   |
		   |
		   |
		   V
		   10
		  /	 \
	     4    20
		/	   \
	   3		21
	       |
		   |
		   |
		   V

		   10
		  /	 \
	     4    20
		        \
	             21
		   |
		   |
		   |
		   V

		   10
		  /	 \
	     4	  21
	*/
	


	system("pause");
	return 0;
}
