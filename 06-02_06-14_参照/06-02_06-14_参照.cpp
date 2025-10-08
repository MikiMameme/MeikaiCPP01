//参照オブジェクト

#include<iostream>

using namespace std;

int main()
{
	int x = 1;
	int y = 2;
	int& a = x;

	cout << "a = " << a << '\n';
	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';

	a = 5;

	cout << "a = " << a << '\n';
	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';
}