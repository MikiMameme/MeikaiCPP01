//入力された月の季節を表示（好きなだけ繰り返せる）

#include<string>
#include<iostream>

using namespace std;

int main()
{
	string retry;

	do {
		int month;
		cout << "季節を求めます\n何月ですか :";
		cin >> month;

		if (month >= 3 && month <= 5)
			cout << "それは春です\n";

		if (month >= 6 && month <= 8)
			cout << "それは夏です\n";

		if (month >= 9 && month <= 11)
			cout << "それは秋です\n";

		if (month == 12 ||  month == 1 || month == 2)
			cout << "それは冬です\n";

		cout << "もう一度しますか Y / N :";
		cin >> retry;
	} while (retry == "Y" || retry == "y");
}