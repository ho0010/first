#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//정렬 함수

void range(char* arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    srand(time(NULL));

    int size = 15;
    char arr[15];

    for (int i = 0; i < 15; i++)
    {
        arr[i] = (rand() % 26) + 65;
    }

    printf("생성된 배열:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%c ", arr[i]);
    }
    printf("\n");

    range(arr, size);

    printf("정렬된 배열:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%c ", arr[i]);
    }
    printf("\n");

    return 0;
}
