#include <stdio.h>
//pow() 제곱 sqrt()은 제곱근 fabs()는 절댓값
// time(NULL) 시간 if(getchar()) 아무키나 입력하면 종료됨
// 최대공약수 구하기는 x%y를 y값으로 반환시키고 y가 = 0이 되면 x를 반환하도록
// 배열이 함수의 인수인 경우 printf_array(list,size);
//strlen은 <string.h>라이브러리에 있다.
//gets(arr,30) puts(arr)

int main()
{
	char name[100];
	char address[100];

	printf("이름을 입력하시오 : ");
	gets_s(name, sizeof(name));
	printf("현재 거주하는 주소를 입력하시오 :");
	gets_s(address, sizeof(address));

	printf("안녕하세요,%s에 사는 %s씨. \n", address, name);
	return 0;

}