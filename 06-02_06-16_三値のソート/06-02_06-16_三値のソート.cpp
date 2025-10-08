//三つの整数値を昇順にソート

#include<iostream>

using namespace std;

//引数を交換
void swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}

//引数を昇順にソート
void sort(int& a, int& b, int& c)
{
	if (a > b) swap(a, b);
	if (b > c) swap(b, c);
	if (a > b) swap(a, b);
}

int main()
{
	int a, b, c;

	cout << "変数a :"; cin >> a;
	cout << "変数b :"; cin >> b;
	cout << "変数c :"; cin >> c;

	sort(a, b, c);

	cout << "整数a, b, cを昇順に並べました\n";
	cout << "変数aの値は" << a << "です\n";
	cout << "変数bの値は" << b << "です\n";
	cout << "変数cの値は" << c << "です\n";
}