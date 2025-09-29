//正の整数を０までカウントダウン（その２）

#include<iostream>

using namespace std;

int main()
{
	int x;

	cout << "カウントダウンします\n";
	do {
		cout << "正の整数値 :";
		cin >> x;
	} while (x <= 0);

	while (x >= 0)
		cout << x-- << "\n";
}