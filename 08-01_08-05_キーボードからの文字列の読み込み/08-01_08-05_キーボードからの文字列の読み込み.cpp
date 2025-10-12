//名前を尋ねて表示（文字列の読み込みと表示）

#include<iostream>

using namespace std;

int main()
{
	char name[36];

	cout << "お名前は:";
	cin >> name;

	cout << "こんにちは、" << name << "さん\n";
}