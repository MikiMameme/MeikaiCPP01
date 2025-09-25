//読み込んだ整数値は正の値か・そうでないか

#include<iostream>

using namespace std;

int main()
{
	int n;

	cout << "整数値 :";
	cin >> n;

	if (n > 0)
		cout << "その値は正です\n";
	else
		cout << "その値は０か負です\n";
}
