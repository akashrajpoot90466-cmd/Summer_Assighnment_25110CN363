#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows");
    scanf("%d", &n);
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (int l = 1; l <= i-1; l++)
        {
            printf(" ");
        }
        for (j = 1; j <= n - i + 1; j++)
        {

            printf("*");
        }
        for (int k = 1; k <= j - 2; k++)
        {
            printf("*");
        }
        printf(" \n");
    }
    return 0;
}