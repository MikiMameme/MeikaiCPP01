//2つの引数の値を交換する

#include<iostream>

using namespace std;

//引数と値を交換
void swap(int& x, int& y)
{
	int t = x;
	x = y;
	y = t;
}

int main()
{
	int a, b;

	cout << "変数a :"; cin >> a;
	cout << "変数b :"; cin >> b;

	//aとbを交換
	swap(a, b);

	cout << "変数aとbの価を交換しました\n";
	cout << "変数aの価は" << a << "です\n";
	cout << "変数bの価は" << b << "です\n";
}