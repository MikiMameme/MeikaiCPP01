//数当てゲーム

#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	srand(time(NULL));

	int no = rand() % 100;
	int x;

	cout << "数当てゲームを開始します\n";
	cout << "０～９９の数を当ててください\n";

	do {
		cout << "いくつかな :";
		cin >> x;

		if (x > no)
			cout << "\aもっと小さな数だよ\n";
		else if (x < no)
			cout << "もっと大きな数だよ\n";
	} while (x != no);

	cout << "正解です\n";
}