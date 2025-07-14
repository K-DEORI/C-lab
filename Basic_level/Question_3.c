// 3. এটা বৃত্তৰ ক্ষেত্ৰফল
#include <stdio.h>
#define PI 3.1416
int main() {
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Area = %.2f\n", PI * radius * radius);
    return 0;
}