//参照を返却する関数

#include<iostream>

using namespace std;


int& ref()
{
	static int x;
	return x;
}

int main()
{
	ref() = 5;
	cout << "ref() =" << ref() << '\n';
}