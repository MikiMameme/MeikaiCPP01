//暗算トレーニング

#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

//続行の確認
bool confirm_retry()
{
	int retry;
	do {
		cout << "もう一度しますか <Yes--1 / No--0> :";
		cin >> retry;
	} while (retry != 0 && retry != 1);
	return static_cast<bool>(retry);
}

int main()
{
	srand(time(NULL));
	cout << "暗算トレーニングを始めます\n";

	do {
		int x = rand() % 900 + 100;
		int y = rand() % 900 + 100;
		int z = rand() % 900 + 100;

		while (true) {
			int k;
			cout << x << " + " << y << " + " << z << " = ";
			cin >> k;
			if (k == x + y + z)
				break;
			cout << "\a違います\n";
		}
	} while (confirm_retry());
}