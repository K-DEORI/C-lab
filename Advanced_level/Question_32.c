// ৰিকাৰচন ব্যৱহাৰ কৰা ফেক্টৰিয়েল
#include <stdio.h>

int factorial(int n) {
    if(n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d = %d\n", num, factorial(num));
    return 0;
}
