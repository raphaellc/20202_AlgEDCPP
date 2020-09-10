#pragma once
#include "ClasseBase.h"
#include "ClasseBaseA.h"

class ClasseDerivada :
	public ClasseBase, public ClasseBaseA
{
public:
	ClasseDerivada();
	~ClasseDerivada();
	void setVelocidade(float _v) override;
	void setX(float _x) override;
	void setY(float _y) override;
	void metodoVirtualPuro() override;
};

