//整数値を読み込んで符号を反転した値を表示

#include<iostream>

using namespace std;

int main()
{
	int a;

	cout << "整数値 :";
	cin >> a;

	int b = -a;
	cout << a << "の符号を反転した値は" << b << "です\n";
}