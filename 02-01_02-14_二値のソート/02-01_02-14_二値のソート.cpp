//二値のソート

#include<iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "変数a :"; cin >> a;
	cout << "変数b :"; cin >> b;

	if (a > b) {
		int t = a;
		a = b;
		b = t;
	}
	cout << "a≦bとなるようにソートしました\n";
	cout << "変数aは" << a << "です\n";
	cout << "変数bは" << b << "です\n";
}