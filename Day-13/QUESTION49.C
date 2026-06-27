#include <stdio.h>
int main()
{
    int arr[100], n;
    printf("Enter length of array:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Array:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}