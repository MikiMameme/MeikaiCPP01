//前置形式と後置形式の確認（注：コンパイルエラーになる！）

#include<iostream>

using namespace std;

int main()
{
	{
		int x = 0;

		++x = 5; //これが正しい書き方
		cout << "xの値は" << x << "です\n";

		x++ = 10; //この書き方はできません、コンパイルエラーになります！
		cout << "xの値は" << x << "です\n";
	}
}