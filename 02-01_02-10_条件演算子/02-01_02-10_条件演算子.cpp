//if文

#include<iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "整数a :"; cin >> a;
	cout << "整数b :"; cin >> b;

	int min;
	if (a < b)
		min = a;
	else
		min = b;

	cout << "小さい方の値は" << min << "です\n";
}