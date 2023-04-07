#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int x;
	printf("Ãâ»ý ÈÄ ¸î °³¿ùÀÌ °æ°úµÇ¾ú½À´Ï±î? : ");
	scanf("%d", &x);

	if (x == 1)
		printf("\n°áÇÙ \nBÇü °£¿°");
	else if (x == 2)
		printf("\nBÇü °£¿° \nÆÄ»óÇ³ \nÆó·Å±¸±Õ");
	else if (x >= 3 && x <= 6)
		printf("\nÆÄ»óÇ³ \nÆó·Å±¸±Õ");
	else if (x >= 7 && x <= 15)
		printf("\nÆó·Å±¸±Õ");
	else
		printf("\nÇÊ¿äÇÑ ¿¹¹æÁ¢Á¾ÀÌ ¾ø½À´Ï´Ù.");

	return 0;
}