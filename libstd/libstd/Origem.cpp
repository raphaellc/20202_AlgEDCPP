#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::vector<int> myvector;
	for (int i = 1; i <= 5; i++) myvector[i] = 1;
	std::vector<int>::const_iterator cit;
	std::vector<int>::const_reverse_iterator crit;
	crit = myvector.crbegin();
	crit = myvector.crend();

	int i = 0;
	//1 2 3 4 5
	std::vector<int>::reverse_iterator rit = myvector.rbegin();
	for (; rit != myvector.rend(); ++rit)
		std::cout << ' ' << *rit;

	std::cout << "myvector contains:";
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
	system("pause");
	return 0;
}