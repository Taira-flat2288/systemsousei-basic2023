#include<stdio.h>
int main()
{
	char c;
	printf("D‚«‚È•¶š‚ğ“ü—Í‚µ‚Ä‚Ë");
	scanf_s("%c", &c);
	if (('A' <= c) && (c <= 'Z'))
	{
		printf("‘å•¶š‚ªŠÜ‚Ü‚ê‚Ä‚¢‚Ü‚·");
	}
	else
		printf("‘å•¶š‚Í‚ ‚è‚Ü‚¹‚ñ");
	return 0;
}