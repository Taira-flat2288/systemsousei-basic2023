#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c, D, x1, x2;
	printf("a:b:c‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
	scanf_s("%f:%f:%f", &a, &b, &c);
	if (a == 0)
	{
		while(1)
		{
			printf("a‚ğ0ˆÈŠO‚Å“ü—Í‚µ’¼‚µ‚Ä‚­‚¾‚³‚¢");
			scanf_s("%f", &a);
			if (a = !0)
			{
				break;
			}
		}
	}
	else
	{
		D = b * b - 4 * a * c;
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		if (D > 0)
		{
			printf("2ŒÂ‚ÌÀ”‰ğ‚Å‰ğ‚Íx=%gAx=%g", x1, x2);
		}
		else if (D == 0)
		{
			printf("1ŒÂ‚ÌÀ”‰ğ‚Å‰ğ‚Íx=%g", x1);
		}
		else
		{
			printf("0ŒÂ‚ÌÀ”‰ğ");
		}
	}
}