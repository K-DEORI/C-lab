// দুটা ফাইল তৃতীয়ত একত্ৰিত কৰক
#include <stdio.h>

int main() {
    FILE *f1 = fopen("file1.txt", "r");
    FILE *f2 = fopen("file2.txt", "r");
    FILE *f3 = fopen("merged.txt", "w");
    char ch;

    if (!f1 || !f2 || !f3) {
        printf("Error opening files.\n");
        return 1;
    }

    while ((ch = fgetc(f1)) != EOF) fputc(ch, f3);
    while ((ch = fgetc(f2)) != EOF) fputc(ch, f3);

    printf("Files merged into merged.txt\n");
    fclose(f1);
    fclose(f2);
    fclose(f3);
    return 0;
}
