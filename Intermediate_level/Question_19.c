// এটা এৰেত সৰ্ববৃহৎ উপাদান বিচাৰি উলিয়াওক
#include <stdio.h>

int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] > max)
            max = arr[i];

    printf("Largest element: %d\n", max);
    return 0;
}
