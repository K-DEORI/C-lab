// এৰেত উপাদান সন্নিবিষ্ট কৰক
#include <stdio.h>

int main() {
    int arr[100], n, pos, val;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &val);

    for(int i = n; i > pos; i--)
        arr[i] = arr[i-1];
    arr[pos] = val;
    n++;

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
