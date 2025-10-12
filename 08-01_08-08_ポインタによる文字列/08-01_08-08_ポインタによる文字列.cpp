//配列による文字列とポインタによる文字列

#include<iostream>

using namespace std;

int main()
{
	char str[] = "ABC";
	const char* ptr = "XYZ";

	cout << "str = \"" << str << "\"\n";
	cout << "ptr = \"" << ptr << "\"\n";
}