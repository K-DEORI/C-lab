// 11. প্ৰাইম পৰীক্ষা কৰক
#include <stdio.h>
int main() {
    int n, i, flag = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) flag = 0;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("Prime\n");
    else
        printf("Not Prime\n");
    return 0;
}