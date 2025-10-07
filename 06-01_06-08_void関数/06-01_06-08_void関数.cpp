//直角三角形を表示（関数版）

#include<iostream>

using namespace std;

//*をn個連続表示
void put_stars(int n)
{
	while (n-- > 0)
		cout << '*';
}

int main()
{
	int n;

	cout << "左下直角の三角形を表示します\n";
	cout << "段数は :";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		put_stars(i);
		cout << '\n';
	}
}