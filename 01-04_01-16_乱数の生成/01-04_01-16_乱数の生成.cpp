//０～９のラッキーナンバーを乱数で生成

#include<ctime>
#include<cstdlib>
#include<iostream>

using namespace std;

int main()
{
	srand(time(NULL));

	int lucky = rand() % 10;

	cout << "今日のラッキーナンバーは" << lucky << "です\n";
}