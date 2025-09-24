//円周の長さと円の面積を求める（その１）

#include<iostream>

using namespace std;

int main()
{
	double r;

	cout << "半径 :";
	cin >> r;

	cout << "円周の長さは" << 2 * 3.14 * r << "です\n";
	cout << "面積は" << 3.14 * r * r << "です\n";
}