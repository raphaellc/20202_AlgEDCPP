#include "ClasseDerivada.h"



ClasseDerivada::ClasseDerivada()
{
}


ClasseDerivada::~ClasseDerivada()
{
}

void ClasseDerivada::setVelocidade(float _v)
{
	if(_v > 0 && _v < 100)
	{
		this->vel = _v;
	}else
	{
		//exception
	}
}

void ClasseDerivada::setX(float _x)
{
	if (_x > 0 && _x < 100)
	{
		this->x = _x;
	}
	else
	{
		//exception
	}
}

void ClasseDerivada::setY(float y)
{
	if (_y > 0 && _y < 100)
	{
		this->y = _y;
	}
	else
	{
		//exception
	}
}

void ClasseDerivada::metodoVirtualPuro()
{
	//não tem nada
}
