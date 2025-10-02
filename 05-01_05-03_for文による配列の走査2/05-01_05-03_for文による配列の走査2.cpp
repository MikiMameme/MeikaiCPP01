//for文

#include<iostream>

using namespace std;

int main()
{
	int a[5];

	for (int i = 0; i < 5; i++)
		a[i] = i + 1;

	for (int i = 0; i < 5; i++)
		cout << "a[" << i << "]=" << a[i] << '\n';
}