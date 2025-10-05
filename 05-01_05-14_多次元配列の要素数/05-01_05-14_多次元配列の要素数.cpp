//２次元配列の要素数・構成要素数を表示

#include<iostream>

using namespace std;

int main()
{
	int a[4][3];

	cout << "配列aは" << sizeof(a) / sizeof(a[0]) << "行"
		<< sizeof(a[0]) / sizeof(a[0][0]) << "列です\n";

	cout << "構成要素は" << sizeof(a) / sizeof(a[0][0]) << "個です\n";
}