//配列に文字列を格納して表示

#include<iostream>

using namespace std;

int main()
{
	char s[4];

	s[0] = 'A';
	s[1] = 'B';
	s[2] = 'C';
	s[3] = '\0';

	cout << "配列sに入ってる文字列は\"" << s << "\"です\n";
}