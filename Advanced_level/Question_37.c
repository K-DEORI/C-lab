// ছাত্ৰৰ তথ্যৰ বাবে গঠন
#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s;
    printf("Enter name, age, and marks:\n");
    scanf("%s %d %f", s.name, &s.age, &s.marks);
    printf("Student Info:\nName: %s\nAge: %d\nMarks: %.2f\n", s.name, s.age, s.marks);
    return 0;
}
