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
