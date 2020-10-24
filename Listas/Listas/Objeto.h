#pragma once
class Objeto
{
public:
	Objeto();
	~Objeto();
	int getID();
	void setID(int id);
	bool operator==(Objeto * obj);
	bool operator==(Objeto obj);
	bool operator<=(Objeto * obj);
private:
	int _id;
};

