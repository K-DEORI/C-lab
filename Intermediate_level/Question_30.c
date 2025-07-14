// স্বৰবৰ্ণ, ব্যঞ্জনবৰ্ণ, অংক, আৰু স্থান গণনা কৰা
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int v=0, c=0, d=0, s=0;
    printf("Enter a string: ");
    getchar(); // consume newline
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i])) {
            char ch = tolower(str[i]);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                v++;
            else
                c++;
        }
        else if(isdigit(str[i]))
            d++;
        else if(str[i] == ' ')
            s++;
    }

    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nWhite spaces: %d\n", v, c, d, s);
    return 0;
}
