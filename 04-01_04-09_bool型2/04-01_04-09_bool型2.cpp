//bool型の値を表示

#include<iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "整数a , b :";
	cin >> a >> b;

	cout << boolalpha;

	cout << "a < b =" << (a < b) << '\n';
	cout << "a <= b =" << (a <= b) << '\n';
	cout << "a > b =" << (a > b) << '\n';
	cout << "a >= b =" << (a >= b) << '\n';
	cout << "a == b =" << (a == b) << '\n';
	cout << "a != b =" << (a != b) << '\n';
	cout << "!a     =" << (!a) << '\n';
	cout << "!b     =" << (!b) << '\n';

}