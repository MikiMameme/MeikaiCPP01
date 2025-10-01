//単なる文字型の符号つき・符号なしを判定

#include<climits>
#include<iostream>

using namespace std;

int main()
{
	cout << "この処理系の単なる文字列は"
		<< (CHAR_MIN ? "符号付き" : "符号なし") << "文字列です\n";
}