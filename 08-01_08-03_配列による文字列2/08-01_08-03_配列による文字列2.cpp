//配列に文字列を格納して表示（初期化）

#include<iostream>

using namespace std;

int main()
{
	char s1[] = { 'A', 'B', 'C', '\0' };
	char s2[] = { "ABC" };
	char s3[] = "ABC";

	cout << "配列s1に文字列\"" << s1 << "\"が格納されています\n";
	cout << "配列s2に文字列\"" << s2 << "\"が格納されています\n";
	cout << "配列s3に文字列\"" << s3 << "\"が格納されています\n";
}