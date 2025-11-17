// Insertion Sort - ascending order  
#include<stdio.h>
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7, 34};
    int n = 7, i, j, temp;

    printf("Original array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Insertion Sort logic
    for(i = 1; i < n; i++)
    {
        temp = arr[i];
        for (j = i - 1;j >= 0 && temp <= arr[j] ;j--)
              arr[j+1] = arr[j];
        arr[j+1] = temp;
    }

    printf("\nSorted array (Insertion Sort): ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}