//配列の全要素に乱数を代入して表示

#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	srand(time(NULL));
	const int n = 5;
	int a[n];

	for (int i = 0; i < n; i++)
		a[i] = rand() % 10;

	for (int i = 0; i < n; i++)
		cout << "a[" << i << "]=" << a[i] << '\n';
}