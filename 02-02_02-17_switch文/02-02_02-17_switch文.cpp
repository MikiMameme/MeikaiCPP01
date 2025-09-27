//読み込んだ値に応じてジャンケンの手を表示

#include<iostream>

using namespace std;

int main()
{
	int hand;

	cout << "手を選んでください(0.グー / 1.チョキ / 2.パー) :";
	cin >> hand;

	switch (hand) {
	case 0: cout << "グー\n"; break;
	case 1: cout << "チョキ\n"; break;
	case 2: cout << "パー\n"; break;
	}
}