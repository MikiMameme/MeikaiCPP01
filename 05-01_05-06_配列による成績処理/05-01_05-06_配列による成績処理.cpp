//５人の点数を読み込んで合計点・平均点を表示する

#include<iostream>

using namespace std;

int main()
{
	int tensu[5];
	int sum = 0;

	cout << "５人の点数の合計点と平均点を求めます\n";
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "番の点数 :";
		cin >> tensu[i];
		sum += tensu[i];
	}

	cout << "合計点は" << sum << "点です\n";
	cout << "平均は" << static_cast<double>(sum) / 5 << "点です\n";
}