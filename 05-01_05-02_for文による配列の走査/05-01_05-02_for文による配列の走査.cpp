//配列の各要素に代入して表示

#include<iostream>

using namespace std;

int main()
{
	int a[5];

	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;
	a[4] = 5;

	cout << "a{" << 0 << "} =" << a[0] << '\n';
	cout << "a{" << 1 << "} =" << a[1] << '\n';
	cout << "a{" << 2 << "} =" << a[2] << '\n';
	cout << "a{" << 3 << "} =" << a[3] << '\n';
	cout << "a{" << 4 << "} =" << a[4] << '\n';
}