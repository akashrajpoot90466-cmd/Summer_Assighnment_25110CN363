#include <stdio.h>
int main(){
    int rows=5;
    char ch = 'A';


    int i;
    int j;
    for(i=1; i<=rows; i++){
        for(j=1; j<=i; j++){
            printf("%c", 'A'+i-1);
        }
        printf("\n");
    }
    return 0;
}

