#pragma once
#include <iostream>
#include "No.h"

template <class T>
class ArvoreBinaria
{

public:
	ArvoreBinaria();
	~ArvoreBinaria();
	void inserir(T valor);
	No<T>* buscar(T valor);
	void deletar(T valor);
	void visitarPreOrdem();
	void visitarCentral();
	void visitarPosOrdem();
	void visitarLargura();
	int altura(No<T> *nodo);
	No<T>* getRaiz();
private:
	No<T> *raiz;
	void inserir(T valor, No<T>* raiz);
	No<T>* buscar(T valor, No<T>* raiz);
	void deletar(T valor, No<T>* raiz);
	void visitarPreOrdem(No<T>* n);
	void visitarCentral(No<T>* n);
	void visitarPosOrdem(No<T>* n);
	void visitarLargura(No<T>* n);

};
using namespace std;

template<class T>
inline ArvoreBinaria<T>::ArvoreBinaria()
{
	raiz = nullptr;
}

template<class T>
inline ArvoreBinaria<T>::~ArvoreBinaria()
{
}

template<class T>
inline void ArvoreBinaria<T>::inserir(T valor)
{
	this->inserir(valor, this->getRaiz());
}

template<class T>
inline No<T>* ArvoreBinaria<T>::buscar(T valor)
{
	return this->buscar(valor, this->getRaiz());
}

template<class T>
inline void ArvoreBinaria<T>::deletar(T valor)
{
	deletar(valor, raiz);

}

template<class T>
inline void ArvoreBinaria<T>::visitarPreOrdem()
{
	visitarPreOrdem(this->getRaiz());
	cout << "Fim da Arvore.";
}

template<class T>
inline void ArvoreBinaria<T>::visitarCentral()
{
	visitarCentralOrdem(this->getRaiz());
	cout << "Fim da Arvore.";
}

template<class T>
inline void ArvoreBinaria<T>::visitarPosOrdem()
{
	visitarPosOrdem(this->getRaiz());
	cout << "Fim da Arvore.";
}

template<class T>
inline void ArvoreBinaria<T>::visitarLargura()
{
}

template<class T>
inline int ArvoreBinaria<T>::altura(No<T>* nodo)
{
	return 0;
}

template<class T>
inline No<T>* ArvoreBinaria<T>::getRaiz()
{
	return raiz;
}

template<class T>
inline void ArvoreBinaria<T>::inserir(T valor, No<T>* _raiz)
{
	if(_raiz == nullptr)
	{
		No<T> *n = new No<T>;
		n->setDado(valor);
		this->raiz = n;
	} else
	{
		if(valor > _raiz->getDado())
		{
			if(_raiz->getDir() != nullptr)
			{
				inserir(valor, _raiz->getDir());
			}else
			{
				No<T> *n = new No<T>;
				n->setDado(valor);
				_raiz->setDir(n);
			}
		}

		else if(valor < _raiz->getDado()){
			if(_raiz->getEsq() != nullptr){
				inserir(valor, _raiz->getEsq());
			}
			else{
				No<T> *n = new No<T>;
				n->setDado(valor);
				_raiz->setEsq(n);
			}
		}
		
		else
		{
			cout << "O dado sugerido já pertence à ávare.\n";
		}
	}
}

template<class T>
inline No<T>* ArvoreBinaria<T>::buscar(T valor, No<T>* raiz)
{
	
	if(raiz == nullptr)
	{
		cout<<"A árvore está vazia.";
	} else
	{
		//Verifica a raiz

		//visita esquerda
		if(raiz->getEsq()!=nullptr)
		{
			buscarvalor( valor, raiz->getEsq());
		}
		//visita direita
		if(raiz->getDir()!=nullptr)
		{
			buscarvalor(valor,raiz->getDir());
		}
		
	}
}

template<class T>
inline void ArvoreBinaria<T>::deletar(T valor, No<T>* raiz)
{
	No<T> * pai = nullptr;
	No<T> * atual = nullptr;

}

template<class T>
inline void ArvoreBinaria<T>::visitarPreOrdem(No<T>* n)
{
	if(n == nullptr)
	{
		cout<<"A árvore está vazia.";
	} else
	{
		//visita a raiz
		cout << n->getDado() << endl;

		//visita esquerda
		if(n->getEsq()!=nullptr)
		{
			visitarPreOrdem(n->getEsq());
		}
		//visita direita
		if(n->getDir()!=nullptr)
		{
			visitarPreOrdem(n->getDir());
		}
		
	}
}

template<class T>
inline void ArvoreBinaria<T>::visitarCentral(No<T>* n)
{if (n == nullptr)
	{
		cout << "A árvore está vazia.";
	}

	else
	{
		//visita esquerda
		if (n->getEsq() != nullptr)
		{
			visitarCentral(n->getEsq());
		}

		//visita a raiz
		cout << n->getDado() << endl;

		//visita direita
		if (n->getDir() != nullptr)
		{
			visitarCentral(n->getDir());
		}

	}
}

template<class T>
inline void ArvoreBinaria<T>::visitarPosOrdem(No<T>* n)
{
	if (n == nullptr)
	{
		cout << "A árvore está vazia.";
	}
	else 
	{
		//visita esquerda
		if (n->getEsq() != nullptr)
		{
			visitarPosOrdem(n->getEsq());
		}

		//visita direita
		if (n->getDir() != nullptr)
		{
			visitarPosOrdem(n->getDir());
		}

		//visita a raiz
		cout << n->getDado() << endl;
}

template<class T>
inline void ArvoreBinaria<T>::visitarLargura(No<T>* n)
{
}
