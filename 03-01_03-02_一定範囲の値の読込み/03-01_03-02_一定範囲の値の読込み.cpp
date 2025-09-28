//読み込んだ値で手を表示する

#include<iostream>

using namespace std;

int main()
{
	int hand;

	do {
		cout << "手を選んでください（0.グー / 1.チョキ / 2.パー） :";
		cin >> hand;
	} while (hand < 0 || hand > 2);

	switch (hand) {
	case 0: cout << "グー\n"; break;
	case 1: cout << "チョキ\n"; break;
	case 2: cout << "パー\n"; break;
	}
}