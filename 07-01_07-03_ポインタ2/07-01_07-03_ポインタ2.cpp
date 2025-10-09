//アドレス演算子と間接参照演算子

#include<iostream>

using namespace std;

int main()
{
	int x = 123, y = 567, sw;

	cout << "x = " << x << '\n';
	cout << "y = " << y << '\n';

	cout << "値を変更する変数[0-x / 1-y] :";
	cin >> sw;

	int* ptr;
	if (sw == 0)
		ptr = &x;
	else
		ptr = &y;

	*ptr = 999;

	cout << "x =" << x << '\n';
	cout << "y =" << y << '\n';
}