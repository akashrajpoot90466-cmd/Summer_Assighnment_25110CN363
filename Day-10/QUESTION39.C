#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows");
    scanf("%d", &n);
    int i, j;
    for (i = 1; i <= n; i++)
    {
        int a = i - 1;
        for (int l = 1; l <= n - i; l++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int k = 1; k <= i - 1; k++)
        {
            printf("%d", a);
            a--;
        }
        printf("\n");
    }
    return 0;
}