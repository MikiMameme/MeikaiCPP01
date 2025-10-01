//文字と文字コードを表示

#include<cctype>
#include<climits>
#include<iostream>

using namespace std;

int main()
{
	cout << "この処理系の文字と文字コード\n";

	for (char i = 0; ; i++) {
		switch (i) {
		case '\a': cout << "\\a"; break;
		case '\b': cout << "\\b"; break;
		case '\f': cout << "\\f"; break;
		case '\n': cout << "\\n"; break;
		case '\r': cout << "\\r"; break;
		case '\t': cout << "\\t"; break;
		case '\v': cout << "\\v"; break;
		default: cout << ' ' << (isprint(i) ? i : ' ');
		}

		cout << ' ' << hex << int(i) << '\n';

		if (i == CHAR_MAX) break;
	}
}