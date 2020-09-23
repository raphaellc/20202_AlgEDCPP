#include "No.h"

int No::getDado()
{
	return dado;
}

void No::setDado(int d)
{
	dado = d;
}

No * No::getProximo()
{
	return proximoNo;
}

void No::setProximo(No * prox)
{
	proximoNo = prox;
}
