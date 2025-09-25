//読み込んだ整数値が奇数偶数か判定

#include<iostream>

using namespace std;

int main()
{
	int n;

	cout << "整数値　:";
	cin >> n;

	if (n > 0)
		if(n % 2 == 0)
		cout << "その値は偶数です\n";
		else
			cout << "その値は奇数です\n";
	else
		cout << "\a正しくない値が入力されました！\n";
}