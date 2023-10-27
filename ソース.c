#include <stdio.h>
int main()
{
	int BPM = 0, note = 0, BPM2 = 0;
	printf("BPMは何ですか？");
	scanf_s("%d", &BPM);
	printf("何分感覚ですか？");
	scanf_s("%d", &note);
	BPM2 = BPM * note / 16;
	printf("16分換算するとBPMは　%d　です", BPM2);
	return 0;
}