#ifndef FILA_H
#define FILA_H
#include "Lista.h"
template <class T>
class Fila
{
public:
	Fila();
	~Fila();
	
	void entrarNaFila(T * elemento);
	T * frente();
	T * final();
	void removerDaFila();
	int tamanho();
	bool vazia();
private:
	Lista<T> * estruturaDeDados;
};


template<class T>
inline Fila<T>::Fila()
{
	estruturaDeDados = new Lista<T>;
}

template<class T>
inline void Fila<T>::entrarNaFila(T * elemento)
{
	estruturaDeDados->inserirLista(elemento);
}

template<class T>
inline T* Fila<T>::frente()
{
	return estruturaDeDados->obterPrimeiroElemento();
}

template<class T>
inline T * Fila<T>::final()
{
	return estruturaDeDados->obterUltimoElemento();
}

template<class T>
inline void Fila<T>::removerDaFila()
{
	estruturaDeDados->removerPrimeiroElemento();
}

template<class T>
inline int Fila<T>::tamanho()
{
	return estruturaDeDados->quantidadeElementos();
}

template<class T>
inline bool Fila<T>::vazia()
{
	return estruturaDeDados->listaVazia();
}
#endif