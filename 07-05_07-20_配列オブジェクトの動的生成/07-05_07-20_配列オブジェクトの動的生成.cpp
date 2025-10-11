//整数配列オブジェクトを動的に生成

#include<iostream>

using namespace std;

int main()
{
	int asize;
	cout << "要素数:";
	cin >> asize;

	int* a = new int[asize];
	
	for (int i = 0; i < asize; i++)
		a[i] = i;

	for (int i = 0; i < asize; i++)
		cout << "a[" << i << "]=" << a[i] << '\n';
	delete[] a;
}