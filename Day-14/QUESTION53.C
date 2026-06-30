#include <stdio.h>
int main()
{
    int arr[100], n;
    printf("Enter size of array");
    scanf("%d", &n);
    printf("Enter %d elements of araay:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int searchElement;
    printf("Enter search element:");
    scanf("%d", &searchElement);
    for (int i = 0; i < n; i++)
    {
        if (searchElement == arr[i])
        {
            printf("Element find at index %d:", i);
            int found = 1;
            break;
        }
    }
    if (int found = 0)
    {
        printf("Element not found:");
    }
    return 0;
}
