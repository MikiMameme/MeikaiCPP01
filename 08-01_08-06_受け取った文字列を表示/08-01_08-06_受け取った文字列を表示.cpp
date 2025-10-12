//受け取った文字列を表示

#include<iostream>
#include<cctype>

using namespace std;

//文字列を表示
void put_str(const char s[])
{
	for (int i = 0; s[i] != 0; i++)
		cout << s[i];
}

int main()
{
	char str[36];

	put_str("文字列 :");
	cin >> str;

	put_str(str);
	cout << '\n';
}