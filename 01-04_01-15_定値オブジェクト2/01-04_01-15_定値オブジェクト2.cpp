//円周の長さと円の面積を求める（その２）

#include<iostream>

using namespace std;

int main()
{
	const double PI = 3.1416;
	double r;

	cout << "半径 :";
	cin >> r;

	cout << "円周の長さは" << 2 * PI * r << "です\n";
	cout << "面積は" << PI * r * r << "です\n";
}