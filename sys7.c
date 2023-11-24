#include<stdio.h>
#include<string.h>
int main()
{
	char x[17];
	printf("パスワードを入力して下さい");
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
			printf("クリア！");
		}
		else
		{
			if (lcc == 0)
			{
				printf("小文字が含まれていません");
			}
			else if (ucc == 0)
			{
				printf("大文字が含まれていません");
			}
		}
	}
	else
	{
		printf("ダメなパスワード\n");
		if (length < 8)
		{
			printf("短すぎます");
		}
		else if (length > 16)
		{
			printf("長すぎます");
		}
	}
	return 0;
}
