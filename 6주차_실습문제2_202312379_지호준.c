#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num;
	
	printf("다음 중 원하는 메뉴의 번호를 입력하세요.\n");
	printf("1 - 짜파구리\n");
	printf("2 - 카구리\n");
	printf("3 - 불닭게티\n");
	printf("4 - 공화뽕\n");
	printf("default - 치즈게티\n");
	scanf("%d", &num);

	switch (num) {
	case 1: printf("짜파구리\n");
		break;
	case 2: printf("카구리\n");
		break;
	case 3: printf("불닭게티\n");
		break;
	case 4: printf("공화뽕\n");
		break;
	default: printf("치즈게티\n");
		break;
	}
	return 0;
}