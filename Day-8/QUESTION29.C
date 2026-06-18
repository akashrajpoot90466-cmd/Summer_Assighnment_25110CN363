#include<stdio.h>
int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    int i;
    int j;
    for(i=1; i<=rows; i++){
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}