//読み込んだ整数値の全約数を表示

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "整数値 :";
	cin >> n;

	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			cout << i << '\n';
}