#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float xf;
	printf("float 입력 : ");
	scanf("%f", &xf);

	double xd;
	printf("double 입력 : ");
	scanf("%lf", &xd);

	printf("입력된 float xf = %f \n", xf);
	printf("입력된 double xd = %lf \n", xd);

	return 0;

}