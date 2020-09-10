#pragma once
class ClasseBase
{
public:
	ClasseBase();
	~ClasseBase();
	virtual void setVelocidade(float _v);
	virtual void setX(float _x);
	virtual void setY(float _y);
	float getVelocidade();
	float getX();
	float getY();
protected:
	float x, y, vel;
};

