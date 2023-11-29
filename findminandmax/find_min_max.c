#include <stdio.h>

void bubblesort(int arr[], int size)
{
   int temp;

    for (int i = 0; i < size -1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }


        }

    }
}

int main()
{

    int size = 10;
    int arr[] = {1, 4, 5, 6, 9, 88, 107, 2, 0};
    bubblesort(arr, size);

    int max = arr[size - 1];
    int min = arr[0];

    printf("Maximum %d\n", max);
    printf("Minimum: %d\n", min);

}