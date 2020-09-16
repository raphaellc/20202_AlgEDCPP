#pragma once
class No
{
public:
	No() { proximoNo = nullptr; };
	~No() {};
	
	//Insira um metodo aqui
	int getDado();
	void setDado(int d); //O que faz esse método. 
	//Insira outro metodo aqui
	No * getProximo();
	void setProximo(No * prox);
private:
	int dado = 0;
	No * proximoNo;
};

