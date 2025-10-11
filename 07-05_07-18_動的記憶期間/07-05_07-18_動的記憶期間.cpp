//整数オブジェクトを動的に生成

#include<iostream>

using namespace std;

int main()
{
	int* x = new int;

	cout << "整数:";
	cin >> *x;
	cout << "*x=" << *x << '\n';
	delete x;
}