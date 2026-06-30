#include <stdio.h>
int main()
{
    int arr[100], n;
    printf("Enter size of an aaray:");
    scanf("%d", &n);
    printf("Enter %d Elements:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0, Element;
    printf("Enter the element to find frequency:");
    scanf("%d", &Element);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == Element)
        {
            count++;
        }
    }
    printf("frequency of %d = %d\n", Element, count);
    return 0;
}