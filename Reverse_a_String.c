#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char input[1000];
    fgets(input, sizeof(input), stdin);
    if (input[strlen(input) - 1] == '
') {
        input[strlen(input) - 1] = NULL;
    }
    reverseString(input);
    printf("%s
", input);

    return 0;
}