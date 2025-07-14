// 14. স্বৰবৰ্ণ বা ব্যঞ্জনবৰ্ণ
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        char low = ch | 32;
        if (low == 'a' || low == 'e' || low == 'i' || low == 'o' || low == 'u')
            printf("Vowel\n");
        else
            printf("Consonant\n");
    } else {
        printf("Not an alphabet\n");
    }
    return 0;
}