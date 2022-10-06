#include <stdio.h>     
#include <stdlib.h>     

int arr[] = { 40, 10, 100, 90, 20, 25 };

int comp(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int n;
    qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(int), comp);
    for (n = 0; n < sizeof(arr) / sizeof(arr[0]); n++)
        printf("%d ", arr[n]);
    return 0;
}
