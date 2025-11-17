// Selection Sort - ascending order
#include<stdio.h>
int main()
{
    int arr[] = {64, 25, 12, 22, 11, 90, 34};
    int n = 7, i, j, small, pos, temp;

    printf("Original array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    // Selection Sort logic
    for(i = 0; i < n-1; i++)
    {
        pos = i;
	small = arr[i];
        for(j = i; j < n; j++)
        {
            if(arr[j] <= small)
	    {
                pos = j;
		small = arr[j];
	    }
        }
        temp = arr[i];
        arr[i] = small;
        arr[pos] = temp;
     }

    printf("\nSorted array (Selection Sort): ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}