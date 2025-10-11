//整数オブジェクトを自動生成（初期化子による初期化）

#include<iostream>

using namespace std;

int main()
{
	int* x = new int(5);

	cout << "*x=" << *x << '\n';
	delete x;
}