#include <stdio.h>
int main()
{
	int BPM = 0, note = 0, BPM2 = 0;
	printf("BPM�͉��ł����H");
	scanf_s("%d", &BPM);
	printf("�������o�ł����H");
	scanf_s("%d", &note);
	BPM2 = BPM * note / 16;
	printf("16�����Z�����BPM�́@%d�@�ł�", BPM2);
	return 0;
}