//読み込んだ個数だけ表示（for文）

#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "何個表示しますか :";
	cin >> n;

	for (int i = 0; i < n; i++)
		cout << '*';
	cout << '\n';
}