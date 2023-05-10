#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

int main() 
{	
	char a;
	float width,height,base,radius,A,B,C;
	
	do {
		printf("도형선택(사각형-R, 삼각형-T, 원-C) : ");
		scanf("%c", &a);

		
	} while (a != 'R' && a != 'T' && a != 'C');

	switch (a)
	{
	case'R':
		printf("width 입력 :");
		scanf("%f", &width);
		printf("height 입력 :");
		scanf("%f", &height);
		A = width * height;
		printf("사각형의 면적은 %f", A);
		
		break;

	case'T':
		printf("base 입력 :");
		scanf("%f", &base);
		printf("height 입력 :");
		scanf("%f", &height);
		B = base * height / 2;
		printf("삼각형의 면적은 %f", B);
		break;

	case'C':
		printf("radius 입력 :");
		scanf("%f", &radius);
		C = PI*radius*radius;
		printf("원의 면적은 %f", C);
		break;
	


	}


}