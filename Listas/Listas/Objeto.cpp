#include "Objeto.h"



Objeto::Objeto()
{
}


Objeto::~Objeto()
{
}

int Objeto::getID()
{
	return _id;
}

void Objeto::setID(int id)
{
	_id = id;
}

bool Objeto::operator==(Objeto * obj)
{
	return (_id == obj->getID());
}

bool Objeto::operator==(Objeto obj)
{
	return _id == obj.getID();
}

bool Objeto::operator<=(Objeto * obj)
{
	return _id <= obj->getID();
}
