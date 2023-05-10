#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//조건문 do while이용 사각형 삼각형 원의 면적 선택하도록
//do while 사용법과 =이 아닌 ==이라는것 그리고 서식지정자 사용 주의
//자릿수 조절해서 출력할 수 있음 %lf가 아니라 %.2lf 로 사용가능하다.

int main()
{
	int a,b;
	printf("정수 n의 값을 입력하시오 :");
	scanf("%d", &a);

	do {
		printf("1---사각형의 면적을 구한다.\n");
		printf("2---삼각형의 면적을 구한다.\n");
		printf("3---원의 면적을 구한다.\n");
		printf("하나를 고르시오.\n");
		scanf("%d", &b);
	} while (b < 1 || b>3);
	
	if (b == 1) {
		printf("사각형의 면적은 %d입니다.\n", a * a);
	}
	else if (b == 2) {
		double c;
		c = (a * a) / 4 * sqrt(3);
		printf("삼각형의 면적은 %.2lf입니다.\n", c);
	}
	else {
		printf("원의 면적은 %lf입니다.\n", (a * a) * 3.14);
	}
}