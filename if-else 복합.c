#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()

{	

	int score;
	printf("숫자를입력하세요: \n");
	scanf("%d", &score);


	if (score >= 60)
	{
		printf("합격입니다.\n");
		printf("장학금도 받을 수 있습니다.\n");
	}
	else
	{
		printf("불합격입니다.\n");
		printf("다시 도전하세요.\n"); 
	}
	
	//복합 if문 가능하고 else는 가장 가까운 if와 매치된다.


	return 0;
}