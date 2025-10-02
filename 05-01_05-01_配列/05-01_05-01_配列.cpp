//５人の点数を読み込んで合計点・平均点を表示

#include<iostream>

using namespace std;

int main()
{
	int yamane, takada, kawakami, saegusa, tozuka;
	int sum = 0;

	cout << "５人の点数の合計点と平均点を求めます\n";
	cout << "１番の点数 :"; cin >> yamane; sum += yamane;
	cout << "２番の点数 :"; cin >> takada; sum += takada;
	cout << "３番の点数 :"; cin >> kawakami; sum += kawakami;
	cout << "４番の点数 :"; cin >> saegusa; sum += saegusa;
	cout << "５番の点数 :"; cin >> tozuka; sum += tozuka;

	cout << "合計は" << sum << "点です\n";
	cout << "平均は" << static_cast<double>(sum) / 5 << "点です\n";
}