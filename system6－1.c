#include<stdio.h>
int main()
{
	char c;
	printf("�D���ȕ�������͂��Ă�");
	scanf_s("%c", &c);
	if (('A' <= c) && (c <= 'Z'))
	{
		printf("�啶�����܂܂�Ă��܂�");
	}
	else
		printf("�啶���͂���܂���");
	return 0;
}