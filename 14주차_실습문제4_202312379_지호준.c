#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() 

{
    char arr[40];
    unsigned int sum = 0,len,k=0;
    printf("2진수 입력(32자리 이하) : ");

    gets(arr, 40);

    len = strlen(arr);

    for (int i = 0; i < len; len--)
    {
        if (arr[len-1] == '1')
        {
            sum += pow(2, k);
        }
        k++;
    }

    printf("%s = %d",arr, sum);

}
