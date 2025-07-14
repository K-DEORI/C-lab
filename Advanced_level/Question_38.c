// ফাইললৈ পঢ়ক আৰু লিখক
#include <stdio.h>

int main() {
    FILE *fptr;
    char data[100];

    fptr = fopen("data.txt", "w");
    if(fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter text to write: ");
    getchar(); // consume newline
    fgets(data, sizeof(data), stdin);
    fputs(data, fptr);
    fclose(fptr);

    fptr = fopen("data.txt", "r");
    if(fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Content in file:\n");
    while(fgets(data, sizeof(data), fptr) != NULL)
        printf("%s", data);
    fclose(fptr);
    return 0;
}
