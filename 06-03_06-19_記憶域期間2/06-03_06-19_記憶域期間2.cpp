//自動記憶域期間と静的記憶域期間

#include<iostream>

using namespace std;

int fx = 0;

void func()
{
	static int sx = 0;
	int ax = 0;

	fx++; sx++; ax++;
	cout << fx << " " << sx << " " << ax << '\n';
}

int main()
{
	cout << "fx sx ax\n";
	cout << "--------\n";
	for (int i = 0; i < 8; i++)
		func();
}