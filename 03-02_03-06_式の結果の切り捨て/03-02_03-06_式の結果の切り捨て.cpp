//読み込んだ個数だけ*を表示

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "何個表示しますか :";
	cin >> n;

	int i = 0;
	while (i < n) {
		cout << '*';
		i++;
	}
	cout << '\n';
}