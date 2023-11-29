#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
void    reverseArray(int arr[], int size)
{
    int i = 0;
    int rev = size - 1;
    while ( i < rev)
    {
        ft_swap(&arr[i], &arr[rev]);
        i++;
        rev--;
    }
}
//AI written main function
int main() {
    int size;
    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements: ", size);
    for (int i= 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input or initialize array elements

    // Call the function to reverse the array
    reverseArray(arr, size);

    // Print the reversed array
    printf("The reversed array:");
    for (int i= 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("/n");

    return 0;
}