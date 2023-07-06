#include <stdio.h>
#define size 10

int main()
{
	int arr[size] = { 3,2,9,7,1,4,8,0,6,5 };
	int temp,least;

	for (int i = 0; i < size; i++)
	{
		least = i;

		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[least])
			{
				least = j;
			}

			temp = arr[i];
			arr[i] = arr[least];
			arr[least] = temp;

		}
	}

	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);

	}
}