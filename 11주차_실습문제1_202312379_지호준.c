#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{	
	int n,i=1,k=0;
	printf("정수 입력 : ");
	scanf("%d", &n);

	while (1)
	{
		if (n % i == 0) 
		{
			printf("%d의 약수는 %d\n", n, i);
			i++;
			k++; 
		}
		else	
			i++;

		if (n < i) 
		{
			break;
		}
		
	}
	printf("%d의 약수의 개수 = %d", n, k);
}
