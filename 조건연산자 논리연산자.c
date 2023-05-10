#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define pie 3.1425321
//조건 연산자 (x > y) ? x : y;
// 
//논리 연산자 || && ! 

/*switch case 문 6장 61p 산술 계산기
switch (op)
{
case '+':
result = x + y;
break;
case '-':
result = x - y;
break;
case '*':
result = x * y;
break;
case '/':
result = x / y;
break;
case '%':
result = x % y;
break;
default:
printf("지원되지 않는 연산자입니다. \n");
break;
}
printf("%d %c %d = %d \n", x, op, y, result);
return 0;
}*/


/*7장 36p 최대공약수 구하기
#include <stdio.h>
int main(void)
{
int x, y, r;
printf("두개의 정수를 입력하시오(큰수, 작은수): ");
scanf("%d%d", &x, &y);
while (y != 0)
{
r = x % y;
x = y;
y = r;
}
printf("최대 공약수는 %d입니다.\n", x);
return 0;
}*/




int main()

{
	int n,i,a;
	a = 1;

	printf("정수를 입력하시오 :");
	scanf("%d",&n);

	for (i = 1; i <= n; i++)
	{
		a *= i;
	}
	printf("%d!은 %d입니다.", n, a);
	printf("%d", pie);
}