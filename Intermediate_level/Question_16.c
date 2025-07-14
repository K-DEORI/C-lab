// দুটা সংখ্যাৰ জিচিডি আৰু এলচিএম
#include <stdio.h>

int main() {
    int a, b, gcd, lcm, tempA, tempB;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    tempA = a;
    tempB = b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    lcm = (tempA * tempB) / gcd;
    printf("GCD: %d, LCM: %d\n", gcd, lcm);
    return 0;
}
