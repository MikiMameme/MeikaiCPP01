//文字を読み込んで表示（スペースも読み込む）

#include<string>
#include<iostream>

using namespace std;

int main()
{
	string s1 = "ABC";
	string s2 = "XYZ";
	s1 = "FBI"; //s1を代入して書き換える

	cout << "文字列s1は" << s1 << "です\n";
	cout << "文字列s2は" << s2 << "です\n";
}