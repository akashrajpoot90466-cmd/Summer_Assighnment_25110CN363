#include<stdio.h>
int main(){
    int arr[100], n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("The elements in the array are:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\nThe left rotation of the array is:\n");
    int temp = arr[0];
    for(int i = 0; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}