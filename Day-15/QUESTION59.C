#include<stdio.h>
int main(){
    int arr[100],n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The elements in the array are:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nThe right rotation of the array is:\n");
    int temp = arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}