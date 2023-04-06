#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{	
	int x;
	printf("60이상100이하의 숫자인지 판별해줍니다.");
	printf("숫자를입력하세요:");
	scanf("%d", &x);

	printf("%d가 60이상 100미만이다. %d", x, (x >= 60) && (x <= 100));

	return 0;

	// &&는 and연산 :: or연산 ! not연산
}

