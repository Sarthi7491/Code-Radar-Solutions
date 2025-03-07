#include <stdio.h>

int findLength(char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    scanf("%s", str);
    printf("%d\n", findLength(str));
    return 0;
}
