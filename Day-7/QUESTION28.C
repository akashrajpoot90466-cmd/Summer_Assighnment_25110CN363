#include<stdio.h>
int reverse_number(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}
int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    printf("Reversed number: %d\n", reverse_number(n));
    return 0;
}