#pragma once
template <class T, class P>
class Par
{
public:
	Par();
	~Par();
	T first();
	P second();
private:
	T _first;
	P _second;
};

