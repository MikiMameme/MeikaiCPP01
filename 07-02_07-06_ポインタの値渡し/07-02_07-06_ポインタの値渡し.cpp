//2つの整数値の和と積を関数によって求める

#include<iostream>

using namespace std;

//間違い
void sum_mul(int x, int y, int* sum, int* mul)
{
	*sum = x + y;
	*mul = x * y;
}

int main()
{
	int a, b;
	int wa = 0, seki = 0;

	cout << "整数a :"; cin >> a;
	cout << "整数b :"; cin >> b;

	//aとbの和と積を求める？？
	sum_mul(a, b, &wa, &seki);

	cout << "和は" << wa << "です\n";
	cout << "積は" << seki << "です\n";
}