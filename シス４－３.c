#include <stdio.h>
int main()
{
	int n;

	printf("５＋４は？");
	scanf_s("%d", &n);

	if (n == 9)
	{
		printf("できて当然");
	}
	else
	{
		printf("あなたは猿ですか？");
	}
	return 0;
}