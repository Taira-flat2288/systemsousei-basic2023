#include<stdio.h>
#include<string.h>
int main()
{
	char x[17];
	printf("�p�X���[�h����͂��ĉ�����");
	scanf_s("%c", x);
	int ucc = 0, lcc = 0, length = strlen(x);
	for (int i = 0; i < length; i++)
	{
		if (x[i] >= 'A' && x[i] <= 'Z')
		{
			ucc++;
		}
	}
	for (int i = 0; i < length; i++)
	{
		if (x[i] >= 'a' && x[i] <= 'z')
		{
			lcc++;
		}
	}
	if (8 <= length && length <= 16)
	{
		if (ucc >= 1 && lcc >= 1)
		{
			printf("�N���A�I");
		}
		else
		{
			if (lcc == 0)
			{
				printf("���������܂܂�Ă��܂���");
			}
			else if (ucc == 0)
			{
				printf("�啶�����܂܂�Ă��܂���");
			}
		}
	}
	else
	{
		printf("�_���ȃp�X���[�h\n");
		if (length < 8)
		{
			printf("�Z�����܂�");
		}
		else if (length > 16)
		{
			printf("�������܂�");
		}
	}
	return 0;
}
