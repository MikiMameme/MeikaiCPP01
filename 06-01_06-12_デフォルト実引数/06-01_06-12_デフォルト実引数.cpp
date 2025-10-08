//アラートを発する関数(デフォルト実引数)

#include<iostream>

using namespace std;

//n回アラートを発する
void alerts(int n = 3)
{
	while (n-- > 0)
		cout << '\a';
}

int main()
{
	alerts();
	cout << "アラート！\n";

	alerts(5);
	cout << "再びアラート！\n";
}