//５章「配列」まとめ

#include<typeinfo>
#include<iostream>

using namespace std;

int main()
{
	const int A_SIZE = 5;

	//配列aとbは一次元配列
	int a[A_SIZE];
	int b[] = { 1, 2, 3, 4, 5 };

	//配列bの要素数
	int b_size = sizeof(b) / sizeof(b[0]);

	//配列の全要素をコピー
	for (int i = 0; i < A_SIZE; i++)
		a[i] = b[i];

	//配列aの全要素の値を表示
	for (int i = 0; i < A_SIZE; i++)
		cout << "a[" << i << "] = " << a[i] << '\n';

	//配列bの全要素の値を表示
	for (int i = 0; i < b_size; i++)
		cout << "b[" << i << "] =" << b[i] << '\n';

	//配列aの全要素の合計をsumに求めて表示
	int sum = 0;
	for (int i = 0; i < A_SIZE; i++)
		sum += a[i];
	cout << "配列aの全要素の合計=" << sum << '\n';

	//配列cは二次元配列
	int c[2][3] = { {1, 2, 3},
				   {4, 5, 6},
	};
	int c_height = sizeof(c) / sizeof(c[0]);
	int c_width = sizeof(c[0]) / sizeof(c[0][0]);

	cout << "配列cは" << c_height << "行" << c_width << "列の"
		<< "二次元配列です\n";

	//配列cの全構成要素の値を表示
	for (int i = 0; i < c_height; i++) {
		for (int j = 0; j < c_width; j++) {
			cout << "c[" << i << "][" << j << "] =" << c[i][j] << '\n';
		}
	}

	//配列の要素と構成要素の型を表示
	cout << "配列aの型 :" << typeid(a).name() << '\n';
	cout << "aの要素型 :" << typeid(a[0]).name() << '\n';
	cout << "配列bの型 :" << typeid(b).name() << '\n';
	cout << "bの要素型 :" << typeid(b[0]).name() << '\n';
	cout << "配列cの型 :" << typeid(c).name() << '\n';
	cout << "cの要素型 :" << typeid(c[0]).name() << '\n';
	cout << "cの構成要素型 :" << typeid(c[0][0]).name() << '\n';
}