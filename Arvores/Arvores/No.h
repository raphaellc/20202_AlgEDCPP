#pragma once

template <class T>
class No
{
public:
	No();
	~No();

	T getDado();
	void setDado(T _dado);

	No* getEsq();
	No* getDir();

	void setEsq(No* _noEsq);
	void setDir(No* _noDir);

	

private:
	T dado;
	No* esq, dir;

};


template<T>
No::T getDado()
{

} 

template<T>
No::void setDado(T _dado)

