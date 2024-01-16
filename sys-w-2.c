#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
	srand(time(0));
	int i = (rand() % 20) + 1;
	int s = (rand() % (20 - i)) + 1;
	int c = 20 - i - s;
	printf("intelligence = %d\nstamina = %d\ncharisma = %d\n", i, s, c);
	if (i > s && i > c)
	{
		printf("mage");
	}
	else if (s > i && s > c)
	{
		printf("knight");
	}
	else if (c > i && c > s)
	{
		printf("thief");
	}
	else if (i == s && i > c)
	{
		printf("mage & knight");
	}
	else if (s == c && s > i)
	{
		printf("knight & thief");
	}
	else if (i == c && c > s)
	{
		printf("mage & thief");
	}

	return 0;
}