//繰り返しをfloatで制御

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	float sum = 0.0F;
	cout << fixed << setprecision(6);
	for (float x = 0.0F; x <= 1.0F; x += 0.001F) {
		cout << "x =" << x << '\n';
		sum += x;
	}
	cout << "sum =" << sum << '\n';
}