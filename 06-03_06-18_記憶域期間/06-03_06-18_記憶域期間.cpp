//自動記憶域期間と静的記憶域期間

#include<iostream>

using namespace std;

//静的記憶域期間（０で初期化）
int fx;

int main()
{
	//静的記憶域期間（０で初期化）
	static int sx;

	//自動記憶域期間（不定値で初期化したかったがVisualStudioではコンパイルエラーになった）
	int ax;

	cout << "ax = " << ax << '\n';
	cout << "sx = " << sx << '\n';
	cout << "fx = " << fx << '\n';
}