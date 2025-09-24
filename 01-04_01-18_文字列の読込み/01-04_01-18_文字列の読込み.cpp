//文字を読み込んで表示

#include<string>
#include<iostream>

using namespace std;

int main()
{
	string name;

	cout << "文字を入力してください :";
	cin >> name;

	cout << "こんにちは" << name << "さん\n";
}