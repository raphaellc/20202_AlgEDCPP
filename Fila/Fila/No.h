#ifndef NO_H
#define NO_H
template <class D>
class No
{
public:
	No() { proximoNo = nullptr; noAnterior = nullptr; dado = nullptr; };
	~No() {};

	//Insira um metodo aqui
	D * getDado();
	void setDado(D * d); //O que faz esse m�todo. 
	//Insira outro metodo aqui
	No<D> * getProximo();
	void setProximo(No<D> * prox);
	void setAnterior(No<D> * _noAnt);
	No<D> * getAnterior();
	//A <= B

	bool operator<=(No* na)
	{
		return this->dado <= na->getDado();
	}
	bool operator==(No* n);
	//A.<=(B)

private:
	D * dado;
	No * proximoNo;
	No * noAnterior;
};

template <class D>
D * No<D>::getDado()
{
	return dado;
}
template <class D>
void No<D>::setDado(D * d)
{
	dado = d;
}
template <class D>
No<D> * No<D>::getProximo()
{
	return proximoNo;
}
template<class D>
inline void No<D>::setAnterior(No<D>* _noAnt)
{
	noAnterior = _noAnt;
}
template<class D>
inline No<D>* No<D>::getAnterior()
{
	return noAnterior;
}
template<class D>
inline bool No<D>::operator==(No * n)
{
	return this->dado == n->getDado();
}
template <class D>
void No<D>::setProximo(No<D>* prox)
{
	proximoNo = prox;
}
#endif
