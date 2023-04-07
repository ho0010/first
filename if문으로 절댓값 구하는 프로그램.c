#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//if문으로 절댓값 구하는 프로그램 만들기

int main()

{
	int num;
	printf("숫자를입력하세요: \n");
	scanf("%d", &num);

	if (num < 0)
		num = -num;

	printf("입력하신 값의 절댓값은 %d입니다.",num);

	return 0;

	// if( score >= 60 )
	// {
	// 	printf("합격입니다.\n");
	// 	printf("장학금도 받을 수 있습니다.\n");
	//  }
	// 중괄호써서 연속으로 실행시킬수도 있음
}