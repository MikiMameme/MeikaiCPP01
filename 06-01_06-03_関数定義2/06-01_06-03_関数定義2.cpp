//３人の数学・英語の最大値を求めて表示（関数版）

#include<iostream>

using namespace std;

//最大値を返却
int max(int a, int b, int c)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}

int main()
{
	int a, b, c;

	cout << "整数a :"; cin >> a;
	cout << "整数b :"; cin >> b;
	cout << "整数c :"; cin >> c;

	cout << "最大値は" << max(a, b, c) << "です\n";
}