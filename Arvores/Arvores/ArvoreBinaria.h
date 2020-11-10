#pragma once
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

template<class T>
inline ArvoreBinaria<T>::ArvoreBinaria()
{
}

template<class T>
inline ArvoreBinaria<T>::~ArvoreBinaria()
{
}

template<class T>
inline void ArvoreBinaria<T>::inserir(T valor)
{
	No<T> *n = new No<T>; 
}

template<class T>
inline No<T>* ArvoreBinaria<T>::buscar(T valor)
{
	return NULL;
}

template<class T>
inline void ArvoreBinaria<T>::deletar(T valor)
{
}

template<class T>
inline void ArvoreBinaria<T>::visitarPreOrdem()
{
}

template<class T>
inline void ArvoreBinaria<T>::visitarCentral()
{
}

template<class T>
inline void ArvoreBinaria<T>::visitarPosOrdem()
{
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
	return NULL;
}

template<class T>
inline void ArvoreBinaria<T>::inserir(T valor, No<T>* raiz)
{
}

template<class T>
inline No<T>* ArvoreBinaria<T>::buscar(T valor, No<T>* raiz)
{
	return NULL;
}

template<class T>
inline void ArvoreBinaria<T>::deletar(T valor, No<T>* raiz)
{
}

template<class T>
inline void ArvoreBinaria<T>::visitarPreOrdem(No<T>* n)
{
}

template<class T>
inline void ArvoreBinaria<T>::visitarCentral(No<T>* n)
{
}

template<class T>
inline void ArvoreBinaria<T>::visitarPosOrdem(No<T>* n)
{
}

template<class T>
inline void ArvoreBinaria<T>::visitarLargura(No<T>* n)
{
}
