#include <iostream>

using namespace std;
int potencia(int x, int y)
{
	if (y == 0)
	{
		return 1;
	}else
	{
		return x * potencia(x, y - 1);
	}
}
int potenciaIterativa(int x, int y)
{
	int resultado = x;
	if (y == 0) return 1;
	for(int i = 1; i < y; i++)
	{
		resultado = resultado * x;
	}
	return resultado;
}
void main()
{
	//cout << potencia(3, 3) << endl;
	cout << potenciaIterativa(2, 0) << endl;
	system("pause");
}