#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c, D, x1, x2;
	printf("a:b:cを入力してください");
	scanf_s("%f:%f:%f", &a, &b, &c);
	if (a == 0)
	{
		while(1)
		{
			printf("aを0以外で入力し直してください");
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
			printf("2個の実数解で解はx=%g、x=%g", x1, x2);
		}
		else if (D == 0)
		{
			printf("1個の実数解で解はx=%g", x1);
		}
		else
		{
			printf("0個の実数解");
		}
	}
}