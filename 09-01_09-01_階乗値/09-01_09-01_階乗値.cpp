//再帰呼び出しを用いて階乗を求める

#include<iostream>

using namespace std;

//階乗を再帰的に求める
int factorial(int n)
{
	if (n > 0)
		return n * factorial(n - 1);
	else
		return 1;
}

int main()
{
	int x;

	cout << "整数値:";
	cin >> x;

	cout << x << "の階乗は" << factorial(x) << "です\n";
}