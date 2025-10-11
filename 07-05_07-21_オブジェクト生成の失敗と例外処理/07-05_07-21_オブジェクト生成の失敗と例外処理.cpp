//配列オブジェクトを繰り返して動的に生成する
//（テキストのままでは危険なので公開用に修正を加えた）

#include<iostream>
#include<new>

using namespace std;

int main()
{
	cout << "要素数30000のdouble型配列を繰り返し生成します\n";
	int count = 0;
	const int max_count = 100;  // 安全のため上限設定

	while (count < max_count) {
		try {
			double* a = new double[30000];
			cout << ++count << "回目成功\n";
			delete[] a;  // ← 本来はこれ必須
		}
		catch (bad_alloc) {
			cout << count << "回目で配列の生成に失敗しました\n";
			cout << "配列の生成に失敗しましたのでプログラムを中断します\n";
			return 1;
		}
	}
	cout << max_count << "回成功しました\n";
	return 0;
}