//和を求める

#include<iostream>

using namespace std;

int main()
{
	int n;

	cout << "１からnまでの和を求めます\n";
	do {
		cout << "nの値 :";
		cin >> n;
	} while (n <= 0);

	int sum = 0;
	int i = 1;

	while (i <= n) {
		sum += i;
		i++;
	}

	cout << "1から" << n << "までの和は" << sum << "です\n";
}