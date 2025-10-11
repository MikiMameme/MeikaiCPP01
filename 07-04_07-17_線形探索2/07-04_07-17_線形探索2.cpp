//線形探索（その２）

#include<iostream>

using namespace std;

//値keyを線形探索
int seq_search(int* a, int n, int key)
{
	int* p = a;

	while (n-- > 0) {
		if (*p == key)
			return p - a;
		else
			p++;
	}
	return -1;
}

int main(void)
{
	int key, idx;
	int x[8];
	int x_size = sizeof(x) / sizeof(x[0]);

	for (int i = 0; i < x_size; i++) {
		cout << "x[" << i << "]: ";
		cin >> x[i];
	}

	cout << "探す値は :";
	cin >> key;

	if ((idx = seq_search(x, x_size, key)) != -1)
		cout << "その値を持つ要素はx[" << idx << "]です\n";

	else
		cout << "見つかりませんでした\n";
}