//正方形と長方形を表示

#include<iostream>

using namespace std;

//文字を連続表示
void put_nchar(int n, char c)
{
	while (n-- > 0)
		cout << c;
}

//文字を並べて一辺の長さnの長方形を表示
void put_square(int n, char c)
{
	for (int i = 1; i <= n; i++) {
		put_nchar(n, c);
		cout << '\n';
	}
}

//文字cを並べて高さがhで横幅がwの長方形を表示
void put_rectangle(int h, int w, char c)
{
	for (int i = 1; i <= h; i++) {
		put_nchar(w, c);
		cout << '\n';
	}
}

int main()
{
	int n, h, w;

	cout << "正方形を表示します\n";
	cout << "一辺は :"; cin >> n;
	put_square(n, '*');

	cout << "長方形を表示します\n";
	cout << "高さは :"; cin >> h;
	cout << "横幅は :"; cin >> w;

	put_rectangle(h, w, '+');
}