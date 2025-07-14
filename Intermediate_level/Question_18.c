// 1 আৰু 100 ৰ মাজৰ মৌলিক সংখ্যা
#include <stdio.h>
#include <stdbool.h>

int main() {
    for (int i = 2; i <= 100; i++) {
        bool prime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }
        if (prime)
            printf("%d ", i);
    }
    return 0;
}
