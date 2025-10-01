//各種の変数や定数の型情報を表示

#include<iostream>
#include<typeinfo>

using namespace std;

int main()
{
	char c;
	short h;
	int i;
	long l;

	cout << "変数cの型 :" << typeid(c).name() << '\n';
	cout << "変数hの型 :" << typeid(h).name() << '\n';
	cout << "変数iの型 :" << typeid(i).name() << '\n';
	cout << "変数lの型 :" << typeid(l).name() << '\n';

	cout << "文字リテラルAの型 :" << typeid('A').name() << '\n';
	cout << "整数リテラル100の型 :" << typeid(100).name() << '\n';
	cout << "整数リテラル100Uの型 :" << typeid(100U).name() << '\n';
	cout << "整数リテラル100Lの型 :" << typeid(100L).name() << '\n';
	cout << "整数リテラル100ULの型 :" << typeid(100UL).name() << '\n';
}