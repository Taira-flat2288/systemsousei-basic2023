#include<stdio.h>
int main()
{
	char c;
	printf("好きな文字を入力してね");
	scanf_s("%c", &c);
	if (('A' <= c) && (c <= 'Z'))
	{
		printf("大文字が含まれています");
	}
	else
		printf("大文字はありません");
	return 0;
}