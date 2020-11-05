#include <fstream>
#include <iostream>
#include "Unidade.h"

using namespace std;

int main ()
{
	Unidade * un1 = new Unidade(10);
	Unidade * un2 = new Unidade(20);
	Unidade * un3 = new Unidade(30);
	Unidade * un4 = new Unidade(40);

	Unidade * un5 = new Unidade[4];

	fstream arq("teste.bin", ios::binary | ios::out);
	
	if(!arq.is_open())
	{
		cout << "O arquivo não abriu\n";
	}
	else{
		arq.write(reinterpret_cast<const char*>(un1),sizeof(Unidade));
		arq.write(reinterpret_cast<const char*>(un2),sizeof(Unidade));
		arq.write(reinterpret_cast<const char*>(un3),sizeof(Unidade));
		arq.write(reinterpret_cast<const char*>(un4),sizeof(Unidade));
		

		arq.close();
	}	

	ifstream arqr("teste.bin", ios::binary);
	if(!arqr.is_open())
	{
		cout << "O arquivo não abriu\n";
	}
	else
	{
		
		for (int i = 0; i < 4; i++)
			arqr.read(reinterpret_cast<char*>(&un5[i]),sizeof(Unidade));

		arqr.close();
	}	


     for (int i = 0; i < 4; i++)
	{

	
	cout<<"UNIDADE "+to_string(i+1)<<":"<<endl;
	cout<<"ID: " << un5[i].id<<endl;
	cout <<"Defesa: " << un5[i].defesa << endl;
	cout<<"Ataque: "<< un5[i].ataque<<endl;
	}
	//a gnt vai imprimir por um ofstream ou um f?


	system ("pause");
	return 0;
}