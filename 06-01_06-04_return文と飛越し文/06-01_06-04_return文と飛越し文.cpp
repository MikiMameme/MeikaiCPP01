//２つの最大値を求めて表示

#include<iostream>

using namespace std;

//最大値を返却
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main()
{
	int a, b, c;

	cout << "整数a :"; cin >> a;
	cout << "整数b :"; cin >> b;

	cout << "最大値は" << max(a, b) << "です\n";
}