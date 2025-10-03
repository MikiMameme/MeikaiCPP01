//配列の全要素をコピーして表示

#include<iostream>

using namespace std;

int main()
{
	const int n = 5;
	int a[n];
	int b[n] = { 0 };

	for (int i = 0; i < n; i++) {
		cout << "a[" << i << "] :";
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
		b[i] = a[i];

	for (int i = 0; i < n; i++)
		cout << "b[" << i << "]= " << b[i] << '\n';
}