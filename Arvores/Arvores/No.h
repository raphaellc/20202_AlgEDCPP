#pragma once
template <class T>
class No
{
public:
	No();
	~No() {};

	T getDado();
	void setDado(T _dado);

	No<T>* getEsq();
	No<T>* getDir();

	void setEsq(No* _noEsq);
	void setDir(No* _noDir);

private:
	T dado;
	No<T>* esq;
	No<T>* dir;
};

template <class T>
No<T>::No()
{
	esq = nullptr; dir = nullptr;		
}

template <class T>
T No<T>::getDado()
{
	return dado;
} 
template <class T>
void No<T>::setDado(T _dado)
{
	dado = _dado;
}

template <class T>
No<T>* No<T>::getEsq()
{
	return esq;
}

template <class T>
No<T>* No<T>::getDir()
{
	return dir;
}

template <class T>
void  No<T>::setEsq(No<T>* _noEsq)
{
	esq = _noEsq;
}
	
template <class T>
void No<T>::setDir(No<T>* _noDir)
{
	dir = _noDir;
}