#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c, D, x1, x2;
	printf("a:b:c����͂��Ă�������");
	scanf_s("%f:%f:%f", &a, &b, &c);
	if (a == 0)
	{
		while(1)
		{
			printf("a��0�ȊO�œ��͂������Ă�������");
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
			printf("2�̎������ŉ���x=%g�Ax=%g", x1, x2);
		}
		else if (D == 0)
		{
			printf("1�̎������ŉ���x=%g", x1);
		}
		else
		{
			printf("0�̎�����");
		}
	}
}