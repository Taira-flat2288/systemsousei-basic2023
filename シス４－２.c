#include <stdio.h>

int main()
{
	int n;
	printf("数字を入力してください");
	scanf_s("%d", &n);

	if( n%2 == 0)
	{
		printf("偶数です");
	}
	else
	{
		printf("奇数です");
	}
	return 0;
}