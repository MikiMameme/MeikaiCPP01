//読み込んだ整数値はゼロであるかどうか

#include<iostream>

using namespace std;

int main()
{
	int n;

	cout << "整数値 :";
	cin >> n;

	if (!n)
		cout << "その値はゼロです\n";
	else
		cout << "その値はゼロではありません\n";
}