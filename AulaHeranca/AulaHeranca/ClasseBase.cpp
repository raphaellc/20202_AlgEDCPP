#include "ClasseBase.h"



ClasseBase::ClasseBase()
{
	x = 0.0f;
	y = 0.0f;

}


ClasseBase::~ClasseBase()
{
}

void ClasseBase::setVelocidade(float _v)
{
	this->vel = _v;
}

void ClasseBase::setX(float _x)
{
	x = _x;
}

void ClasseBase::setY(float _y)
{
	y = _y;
}

float ClasseBase::getVelocidade()
{
	return vel;
}
