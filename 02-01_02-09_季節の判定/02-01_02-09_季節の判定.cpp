//読み込んだ月の季節を表示

#include<iostream>

using namespace std;

int main()
{
	int month;

	cout << "季節を求めます\n 何月ですか :";
	cin >> month;

	if (month >= 3 && month <= 5)
		cout << "それは春です\n";
	else if (month >= 6 && month <= 8)
		cout << "それは夏です\n";
	else if (month >= 9 && month <= 11)
		cout << "それは秋です\n";
	else if (month >= 12 || month == 1 || month == 2)
		cout << "それは冬です\n";

}