#pragma once
class Unidade
{
public:
	Unidade() { id = 10, defesa = 20; ataque = 30;};
	Unidade(int _id) { id = _id, defesa = 20; ataque = 30;};
	~Unidade(){};
	int id, defesa, ataque;
};