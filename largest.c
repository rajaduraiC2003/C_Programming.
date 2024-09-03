#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void* a, const void* b)
{
    return (*(int*)b - *(int*)a);
}
void print2largest(int arr[], int arr_size)
{  
    qsort(arr, arr_size, sizeof(int), cmpfunc);   
    for (int i = 1; i < arr_size; i++) {
        if (arr[i] != arr[0]) {
            printf("The second largest element is %d\n",
                   arr[i]);
            return;
        }
    }
    printf("There is no second largest element\n");
}
int main()
{
    int arr[] = { 12, 35, 1, 10, 34, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    print2largest(arr, n);
    return 0;
}

