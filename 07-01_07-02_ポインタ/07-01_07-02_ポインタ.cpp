//ポインタの基本

#include<iostream>

using namespace std;

int main()
{
	int n = 135;
	cout << "n :" << n << '\n';
	cout << "&n :" << &n << "番地\n";

	int* ptr = &n;
	cout << "ptr :" << ptr << "番地\n";
	cout << "*ptr :" << *ptr << '\n';
}