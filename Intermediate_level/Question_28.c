// ষ্ট্ৰিংৰ দৈৰ্ঘ্য বিচাৰি উলিয়াওক (কোনো লাইব্ৰেৰী ফাংচন নাই)
#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    printf("Enter a string: ");
    scanf("%s", str);

    while(str[length] != '\0')
        length++;

    printf("Length of the string: %d\n", length);
    return 0;
}
