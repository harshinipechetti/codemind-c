#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '
') {
        str[strlen(str) - 1] = NULL;
    }
    int length = strlen(str);
    printf("%d
", length);
    
    return 0;
}