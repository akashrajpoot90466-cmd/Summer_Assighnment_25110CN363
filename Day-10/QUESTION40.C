#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows");
    scanf("%d", &n);
    char ch = 'A';
    int i, j;
    for (i = 1; i <= n; i++)
    {
        int alp = i - 1;
        for (int l = 1; l <= n - i; l++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c", 'A' + j - 1);
        }
        for (int k = 1; k <= i - 1; k++)
        {
            printf("%c", 'A' + alp - 1);
            alp--;
        }
        printf(" \n");
    }
    return 0;
}