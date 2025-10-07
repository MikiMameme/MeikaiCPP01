//３つの整数値の最大値を求める（関数宣言を追加）

#include<iostream>

using namespace std;

int max(int a, int b, int c);

int main()
{
	int a, b, c;

	cout << "変数a :"; cin >> a;
	cout << "変数b :"; cin >> b;
	cout << "変数c :"; cin >> c;

	cout << "最大値は" << max(a, b, c) << "です\n";
}

//最大値を返却
int max(int a, int b, int c)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	return max;
}