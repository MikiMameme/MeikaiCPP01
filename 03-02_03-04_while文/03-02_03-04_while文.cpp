//正の整数値を０までカウントダウン

#include<iostream>

using namespace std;

int main()
{
	int x;

	cout << "カウントダウンします\n";
	do {
		cout << "正の整数値を入力してください :";
		cin >> x;
	} while (x <= 0);

	while (x >= 0) {
		cout << x << "\n";
		x--;
	}
}