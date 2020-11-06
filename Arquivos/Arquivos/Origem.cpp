#include <fstream>
#include <iostream>
#include "Unidade.h"
#include <string>
using namespace std;

int main ()
{
	Unidade * un1 = new Unidade(10);
	Unidade * un2 = new Unidade(20);
	Unidade * un3 = new Unidade(30);
	Unidade * un4 = new Unidade(40);

	Unidade * un5 = new Unidade[4];

	ofstream arq("teste.bin", ios::binary);
	
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

	ifstream arqr("teste.bin", ifstream::binary);
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
	cout<<"UNIDADE"+to_string(i + 1)<<":"<<endl;
	cout<<"ID: " << un5[i].id<<endl;
	cout <<"Defesa: " << un5[i].defesa << endl;
	cout<<"Ataque: "<< un5[i].ataque<<endl;
	}
	
	 Unidade * aux = new Unidade;
	 arqr.open("teste.bin", ifstream::binary);
	 if (!arqr.is_open())
	 {
		 cout << "O arquivo não abriu\n";
	 }
	 else
	 {
		 arqr.seekg(2 * sizeof(Unidade));
		 
	 	arqr.read(reinterpret_cast<char*>(aux), sizeof(Unidade));

		 arqr.close();
	 }

	 cout << "UNIDADE aux " + to_string(3) << ":" << endl;
	 cout << "ID: " << aux->id << endl;
	 cout << "Defesa: " << aux->defesa << endl;
	 cout << "Ataque: " << aux->ataque << endl;

	 ofstream oarq("teste.bin", ofstream::binary | ios::in);
	if (!oarq.is_open())
	{
			cout << "O arquivo não abriu\n";
	}
	else
	{
		oarq.seekp(2*sizeof(Unidade),ios_base::beg);
		oarq.write(reinterpret_cast<const char *>(aux), sizeof(Unidade));
	}
	oarq.close();


	/*
	arqr.open("teste.bin", ifstream::binary);
	if (!arqr.is_open())
	{
		cout << "O arquivo não abriu\n";
	}
	else
	{
		arqr.seekg(ios::beg);

		arqr.read(reinterpret_cast<char*>(aux), sizeof(Unidade));

		arqr.close();
	}
	cout << "==========================================" << endl;
	cout << "UNIDADE aux " + to_string(0) << ":" << endl;
	cout << "ID: " << aux->id << endl;
	cout << "Defesa: " << aux->defesa << endl;
	cout << "Ataque: " << aux->ataque << endl;*/
	

	arqr.open("teste.bin", ios::binary);
	if (!arqr.is_open())
	{
		cout << "O arquivo não abriu\n";
	}
	else
	{
		arqr.seekg(ios::beg);
		int i = 0;
		while (!arqr.eof()) {
			arqr.read(reinterpret_cast<char*>(&un5[i]), sizeof(Unidade));
			i++;
		}

		arqr.close();
	}

	cout << "===========================================" << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << "UNIDADE" + to_string(i + 1) << ":" << endl;
		cout << "ID: " << un5[i].id << endl;
		cout << "Defesa: " << un5[i].defesa << endl;
		cout << "Ataque: " << un5[i].ataque << endl;
	}
	
	system ("pause");
	return 0;
}