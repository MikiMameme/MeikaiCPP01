//2つの変数の合計と平均を表示

#include<iostream>

using namespace std;

int main()
{
	int x;
	int y;

	x = 63;
	y = 18;

	cout << "xの値は" << x << "です\n";
	cout << "yの値は" << y << "です\n";
	cout << "合計は" << x + y << "です\n";
	cout << "平均は" << (x + y) / 2 << "です\n";
}