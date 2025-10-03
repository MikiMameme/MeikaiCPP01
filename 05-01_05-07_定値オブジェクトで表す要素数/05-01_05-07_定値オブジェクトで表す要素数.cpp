//ninzu人の点数を読み込んで合計点・平均点を表示する

#include<iostream>

using namespace std;

int main()
{
	const int ninzu = 5;
	int tensu[ninzu];
	int sum = 0;

	cout << ninzu << "人の点数の合計点と平均点を求めます\n";
	for (int i = 0; i < ninzu; i++) {
		cout << i + 1 << "番の点数 :";
			cin >> tensu[i];
			sum += tensu[i];
	}

	cout << "合計は" << sum << "点です\n";
	cout << "平均は" << static_cast<double>(sum) / ninzu << "点です\n";
}