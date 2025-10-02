//選ばれた動物の鳴き声とを表示

#include<iostream>

using namespace std;

int main()
{
	enum animal {Dog, Cat, Monkey, Invalid};
	int type;

	do {
		cout << "0-犬  1-猫  2-猿  3-終了  :";
		cin >> type;
	} while (type < Dog || type > Invalid);

	if (type != Invalid) {
		animal selected = static_cast<animal>(type);
		switch (selected) {
		case Dog: cout << "ワンワン！\n"; break;
		case Cat: cout << "ニャーオ！\n"; break;
		case Monkey: cout << "キッキッ！\n"; break;
		}
	}
}