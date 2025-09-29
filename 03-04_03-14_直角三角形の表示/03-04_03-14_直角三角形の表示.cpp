//直角三角形を表示

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "左下直角の三角形を表示します\n";
	cout << "段数は :";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			cout << '*';
		cout << '\n';
	}
}