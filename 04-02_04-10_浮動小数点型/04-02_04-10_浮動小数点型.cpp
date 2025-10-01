//浮動小数点型の変数の値を表示

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	float a = 123456789.0;
	double b = 12345678901234567890.0;
	long double c = 123456789012345678901234567890.0;

	cout << "a =" << setprecision(30) << a << '\n';
	cout << "b =" << setprecision(30) << b << '\n';
	cout << "c =" << setprecision(30) << c << '\n';
}