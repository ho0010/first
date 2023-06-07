#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void search(char* p, char key)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (*p == key)
                printf("탐색 인덱스 = (%d행, %d열)\n", i + 1, j + 1);
            p++;
        }
    }
}

int main()
{
    srand(time(NULL));
    char arr[3][5];
    char key;
    printf("생성된 배열 : \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = rand() % 26 + 65;
            printf(" %c ", arr[i][j]);
        }
        printf("\n");
    }
    printf("KEY 값 입력 : ");
    scanf(" %c", &key);

    search(&arr[0][0], key);
}

    
