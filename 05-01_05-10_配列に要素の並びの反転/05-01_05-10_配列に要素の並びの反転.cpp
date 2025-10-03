//配列の要素の並びを反転する

#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	const int n = 7;
	int a[n];

	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100;
		cout << "a[" << i << "]=" << a[i] << '\n';
	}
	for (int i = 0; i < n / 2; i++) {
		int t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}

	cout << "要素の並びを反転しました\n";
	for (int i = 0; i < n; i++)
		cout << "a[" << i << "] =" << a[i] << '\n';
}