#include <stdio.h>

void    merge(int arr[], int leftArr, int mid, int rightArr)
{
    int i,j,k;
    int lenl = mid - leftArr + 1; //remember the input of mid is from mergeSort!
    int lenr = rightArr - leftArr;

    int TL[lenl], TR[lenr];

    for (i = 0; i < lenl; i++)
        TL[i] = arr[leftArr + i];
    for (j = 0; j < lenr; j++)
        TR[j] = arr[mid + 1 + j];

// left subarrary is arr[leftArr] to arr[mid]
// right subarray is arr[mid+1] to arr[rightArr]
    for (i = 0, j = 0, k = leftArr; k <= rightArr; k++)
    {
        if ((i < lenl)&&(j >= lenr|| TL[i] <= TR [j]))
        {
            arr[k] = TL[i];
            i++;
        }else{
            arr[k] = TR[j];
            j++;
        }
    }


}

void    mergeSort(int arr[], int leftA, int rightA)
{
   if (leftA < rightA)
   {
        int mid = leftA + (rightA - leftA) / 2;
        mergeSort(arr, leftA, mid);
        mergeSort(arr, mid + 1, rightA);
        merge(arr, leftA, mid, rightA);
   }
}

int main()
{
    int arr[] = {99, 6, 9, 3, 8, 5, 6, 11, 77, 0};
    int len = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr,0, len - 1);
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}