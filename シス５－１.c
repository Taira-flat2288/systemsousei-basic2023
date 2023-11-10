#include <stdio.h>
int main()
{
	int i;
	for (i=1; i<=10000; i++)
	{
		if (i % 13 == 0)
		{
			printf("%d\n", i);
		}
		else if (i% 17 == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}