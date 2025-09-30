//読み込んだ整数を加算（負の値は加算しない）

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "整数を加算します\n";
	cout << "何個加算しますか :";
	cin >> n;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		int t;
		cout << "整数 :";
		cin >> t;
		if (t < 0) {
			cout << "\a負の数は加算しません\n";
			continue;
		}
		sum += t;
	}
	cout << "合計は" << sum << "です\n";
}