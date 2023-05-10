#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num;
	
	printf("정수를 입력하시오 : ");
	scanf("%d", &num);
	switch (num % 2) {
	case 1: 
	case -1: printf("홀수입니다.");
		break;
	case 0: printf("짝수입니다.");
		break;
	default: printf("정수에 해당하는 값을 입력하시오."); 
		break;
	}
}