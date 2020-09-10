#include <iostream>

int main()
{
	
	int qualquerNome[10];
	
	int arrSize = sizeof(qualquerNome) / sizeof(qualquerNome[0]);
	int * nomeDaVariavel = new int[10];
	int * nomeQualquer = (int *) malloc(10*sizeof(int));
	for(int i = 0; i < 10; i++)
	{
		nomeDaVariavel[i] = 0;
	}
	delete[] nomeDaVariavel;
	free(nomeQualquer);
	nomeQualquer = (int *) calloc(10, sizeof(int));
	std::cout << sizeof(nomeQualquer) << std::endl;
	for (int i = 0; i < 10; i++)
	{
		nomeQualquer[i] = 10;
	}
	nomeQualquer = (int *) realloc(nomeQualquer, 15 * sizeof(int));
	std::cout << sizeof(nomeQualquer) << std::endl;

	free(nomeQualquer);
	system("pause");
	/*
	1.  Escrever um programa para alocar dinamicamente um vetor de inteiros,
		preencher este vetor com valores lidos do teclado e, por último, escrever o vetor.Ao final libere a memória.Utilize as funções da linguagem C.

		2. Escrever um programa para alocar dinamicamente um vetor de inteiros,
		preencher este vetor com valores lidos do teclado e, por último, escrever o vetor.Ao final libere a memória.Utilize as funções da linguagem C++.

		3. Escrever um programa para alocar dinamicamente um vetor de inteiros,
		preencher este vetor com valores lidos do teclado e mostre na tela os valores do vetor.Após solicite ao usuário uma quantidade para realocar 
		expandindo o espaço já alocado, e solicite para o mesmo informar novos valores para preencher todo o novo espaço, mantendo os já existentes.
		Ao final libere a memória.Utilize as funções da linguagem C.*/

}
