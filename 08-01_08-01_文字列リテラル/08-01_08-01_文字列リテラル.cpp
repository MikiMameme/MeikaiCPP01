//文字列リテラルの型と大きさを表示

#include<iostream>
#include<typeinfo>

using namespace std;

int main()
{
	cout<< "■文字列リテラル\"ABC\"\n";
	cout << "型 :" << typeid("ABC").name()
		<< "大きさ :" << sizeof("ABC") << "\n\n";

	cout << "■文字列リテラル\"\"\n";
	cout << "型 :" << typeid("").name()
		<< "起きさ :" << sizeof("") << "\n\n";

	cout << "■文字列リテラル\"ABC\\0DEF\"\n";
	cout << "型 :" << typeid("ABC\0DEF").name()
		<< "大きさ :" << sizeof("ABC\0DEF") << "\n";
}