#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{   //  조건연산자 정수 2개 입력받기
	int x, y;
	
	printf("정수 2개를 입력하세요: \n");
	scanf("%d %d", &x, &y);

	printf("큰 수 =%d \n", (x > y) ? x : y);
	return 0;
	// X>Y에서 참이면 앞이 나가고 거짓이면 뒤가 나가는 원리이다!

}