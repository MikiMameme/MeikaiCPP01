//typeid演算子によって表示

#include<iostream>
#include<typeinfo>

using namespace std;

//要素型とする配列
void func(int a[][3])
{
	cout << "仮引数aの型 :" << typeid(a).name() << '\n';
}

int main(void)
{
	int x[2][3];
	int y[4][3];

	cout << "実引数xの型 :" << typeid(x).name() << '\n';
	func(x);

	cout << "実引数yの型 :" << typeid(y).name() << '\n';
	func(y);
}