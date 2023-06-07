#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int y, m, d,k,today=0;
	printf("년 월 일 입력 : ");
	scanf("%d %d %d", &y,&m,&d);

	// k=0 평년 k=1 윤년
	k = 0;
	if (y % 4 == 0)
	{
		k = 1;
		if (y % 100 == 0)
		{
			k = 0;
			if (y % 400 == 0)
				k = 1;
		}
	}

	int dayinmonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	if (k == 1)
		dayinmonth[1] = 29;

	for (int i = 0; i < m - 1; i++)
	{
		today += dayinmonth[i];

	}

	today += d ;

	printf("%d년 %d월 %d일은 %d번째 날입니다.", y, m, d, today);
}