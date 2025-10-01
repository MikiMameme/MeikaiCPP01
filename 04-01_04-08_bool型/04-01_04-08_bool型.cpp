//bool型の値を表示

#include<iostream>

using namespace std;

int main()
{
	cout << true << ' ' << false << '\n';

	cout << boolalpha;
	cout << true << ' ' << false << '\n';

	cout << noboolalpha;
	cout << true << ' ' << false << '\n';
}