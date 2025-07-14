// malloc() আৰু free() ব্যৱহাৰ কৰি গতিশীল মেমৰি আবণ্টন
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("You entered: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}
