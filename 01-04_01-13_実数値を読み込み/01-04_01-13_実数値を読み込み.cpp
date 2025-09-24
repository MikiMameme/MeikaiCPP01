//2つの実数値を読み込んで加減乗除した値を表示

#include<iostream>

using namespace std;

int main()
{
	double x;
	double y;

	cout << "xとyを加減乗除します\n";

	cout << "xの値 :";
	cin >> x;

	cout << "yの値 :";
	cin >> y;

	cout << "x + yは" << x + y << "です\n";
	cout << "x - yは" << x - y << "です\n";
	cout << "x * yは" << x * y << "です\n";
	cout << "x / yは" << x / y << "です\n";
}