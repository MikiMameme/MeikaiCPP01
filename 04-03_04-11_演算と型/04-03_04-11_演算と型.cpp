//２つの整数値の平均値を求める

#include<iostream>

using namespace std;

int main()
{
	int x, y;

	cout << "２つの整数値xとyの平均値を求めます\n";
	cout << "xの値 :"; cin >> x;
	cout << "yの値 :"; cin >> y;

	double ave = (x + y) / 2;
	cout << "xとyの平均値は" << ave << "です\n";
}