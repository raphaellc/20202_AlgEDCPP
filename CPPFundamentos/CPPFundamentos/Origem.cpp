//Resolvam o exercício 2 e 3
/*Rodrigo - 2; 3 - Ricardo e Allan;
2. Declare a Classe Jogador
	a. Declare dois atributos privados inteiros identificados como vida e energia.
	b. Inicialize por meio do construtor ambos atributos.
	c. Declare métodos para definir e obter o valor de cada atributo.

*/

//Jogador.h
#pragma once
#include <iostream>
#include <ctime>
using namespace std;
class Jogador
{
public:
	Jogador(int v, int e) {
		vida = v;
		energia = e;
	}
	int getJogadorVida() {
		return vida;
	}
	int	getJogadorEnergia() {
		return energia;
	}
	void setJogadorVida(int valor) {
		valor = vida;
	}
	void setJogadorEnergia(int valor) {
		valor = energia;
	}

private:
	int vida, energia;
};


/*
3. Implemente um programa que use a classe jogador declarada.
	a. Defina os valores para os atributos da classe por meio do construtor;
	b. Mostre os valores dos atributos definidos
	c. Atualize os valores dos atributos por meio dos métodos
	d. Mostre os valores dos atributos definidos.
*/
//Origem.cpp

int main() {

	Jogador jogador(5, 10); //a

	cout << "Vida: " << jogador.getJogadorVida() << endl; //b
	cout << "Energia: " << jogador.getJogadorEnergia() << endl;

	jogador.setJogadorVida(100); //c
	jogador.setJogadorEnergia(100);

	cout << "Vida: " << jogador.getJogadorVida() << endl; //d
	cout << "Energia: " << jogador.getJogadorEnergia() << endl;


	/*
	5. Elabore um programa que:
	a. declare um vetor de inteiros de 10 posições,
	b. Preencha o mesmo com valores entre 20 e 50.
	c. Imprima o resultado da soma de todos os 10 valores preenchidos.
	*/

#include <time.h>

	int vetor[10], soma = 0; //a

	srand(time(0));
		
	// rand() % 20 + 1;
	for (int i = 0; i < 10; i++){
		vetor[i] = rand() % 31 + 20;
	}

	for (int i = 0; i < 10; i++){ //b
		soma += vetor[i];
	}

	cout<<"Soma eh: " << soma << endl; //c

	system ("pause");
	return 0;
}