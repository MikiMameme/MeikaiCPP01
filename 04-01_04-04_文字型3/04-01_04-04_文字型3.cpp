//読み込んだ文字のコードを表示

#include<climits>
#include<iostream>

using namespace std;

int main()
{
	char c;

	cout << "文字を入力せよ :";
	cin >> c;

	cout << "文字'" << c << "'の文字コードは" << int(c) << "です\n";
}