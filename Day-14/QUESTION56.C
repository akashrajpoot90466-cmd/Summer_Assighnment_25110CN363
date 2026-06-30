#include <stdio.h>
int main()
{
    int arr[100], n;
    printf("Enter the size of an array:");
    scanf("%d", &n);
    printf("Enter %d Elements:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("duplicate elements are:  ");
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d", arr[i]);
                break;
            }
        }
    }
    return 0;
}