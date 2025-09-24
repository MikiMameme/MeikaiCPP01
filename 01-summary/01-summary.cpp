//1章まとめ

#include<ctime>
#include<cstdlib>
#include<string>
#include<iostream>

using namespace std;

int main()
{

	int a;
	a = 1;
	int b = 5;

	srand(time(NULL));

	int lucky = rand() % 10;

	cout << "今日のラッキーナンバーは" << lucky << "です\n";
	cout << "2で割った商は" << lucky / 2 << "です\n";
	cout << "2で割った剰余は" << lucky % 2 << "です\n";


	const double PI = 3.14;
	double r;

	cout << "半径 :";
	cin >> r;
	cout << "半径" << r << "の円の面積は"
		<< (PI * r * r) << "です\n";


	string name;

	cout << "お名前は :";
	cin >> name;

	cout << "こんにちは" << name << "さん\n";

}