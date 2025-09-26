//3つの整数の最大値を求める

#include<iostream>

using namespace std;

int main()
{
	int a, b, c;

	cout << "整数a :"; cin >> a;
	cout << "整数b :"; cin >> b;
	cout << "整数c :"; cin >> c;

	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	cout << "最大値は" << max << "です\n";
}