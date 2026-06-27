#include <stdio.h>
int main()
{
    int sum = 0, arr[100];
    int n;
    printf("Enter length of array:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter %d element:", i + 1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("sum of array=%d\n", sum);
    printf("Average of array = %d", sum / n);
    return 0;
}