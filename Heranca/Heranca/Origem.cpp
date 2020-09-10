#include <iostream>
#include "ClasseBase.h"
#include "ClasseDerivada.h"
int main()
{
	ClasseBase * cb = new ClasseBase;
	ClasseDerivada *cder = new ClasseDerivada;

	cder->daGeral;
	cder->tudoNosso;
	cb->tudoNosso;
	cb->daGeral;
	
	

}