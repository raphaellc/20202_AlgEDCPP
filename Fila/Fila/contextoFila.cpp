#include <iostream>
#include "Fila.h"
using namespace std;
int main()
{
	Fila<int> * filaInt = new Fila<int>;
	int * a = new int(10);
	int * b = new int(11);
	int * c = new int(12);

	filaInt->entrarNaFila(a);
	filaInt->entrarNaFila(b);
	filaInt->entrarNaFila(c);

	cout << "Primeiro Da Fila: " << *filaInt->frente() << endl;
	cout << "Ultimo Da Fila: " << *filaInt->final() << endl;
	filaInt->removerDaFila();
	cout << "Primeiro Da Fila: " << *filaInt->frente() << endl;
	cout << "Tamanho: " << filaInt->tamanho() << endl;
	cout << "Ultimo Da Fila: " << *filaInt->final() << endl;
	filaInt->removerDaFila();
	filaInt->removerDaFila();
	cout << "Tamanho: " << filaInt->tamanho() << endl;
	system("pause");
	return 0;
}
