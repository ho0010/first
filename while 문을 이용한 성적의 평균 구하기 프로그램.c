#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
// while 문을 이용한 성적의 평균 구하기 프로그램
int main()
{	
	int grade, n = 0;
	float sum=0, average=0;
	
	printf("성적 입력을 종료하려면 음수를 입력하시오. \n성적을 입력하시오 :");
	scanf("%d", &grade);


	while (grade >= 0)
	{
		sum += grade;
		n += 1; //n++와 동치
		printf("성적을 입력하시오 :");
		scanf("%d", &grade);
		
	}
	//마지막 입력받은 grade는 제외해야 한다.

	average = sum / n;

	printf("값은 %f입니다.", average);

	/*첫번째 입력받은 점수가 포함되지 않는건 어떻게 처리할까 ?
	15,16줄과 17,18 줄의 위치를 바꿨음 (지금은 바뀐 위치로 적용한것)
	*/
}