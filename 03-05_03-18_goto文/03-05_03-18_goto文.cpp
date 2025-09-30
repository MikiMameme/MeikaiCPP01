//読み込んだ整数を加算（9999が入力されたら終了）

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "整数を加算します\n";
	cout << "何個加算しますか :";
	cin >> n;
	cout << "9999で強制終了します\n";

	int sum = 0;
	for (int i = 0; i < n; i++) {
		int t;
		cout << "整数 :";
		cin >> t;
		if (t == 9999)
			goto Exit;
		sum += t;
	}
	cout << "合計は" << sum << "です\n";

Exit:
	;
}