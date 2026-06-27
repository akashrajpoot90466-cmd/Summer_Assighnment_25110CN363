#include <stdio.h>
int main()
{
    int n;
    printf("Enter size:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]:", i);
        scanf("%d", &arr[i]);
    }
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even = %d\n odd = %d", even, odd);
    return 0;
}