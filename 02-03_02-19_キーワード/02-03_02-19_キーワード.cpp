//うるう年かどうか調べる

#include<iostream>

using namespace std;

int main()
{
	int y;

	cout << "年を入力せよ :";
	cin >> y;

	cout << "その年はうるう年";
	if (y % 4 == 0 and y % 100 != 0 or y % 400 == 0)
		cout << "です\n";
	else
		cout << "ではありません\n";
}