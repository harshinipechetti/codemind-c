#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "
")] = NULL;
    str2[strcspn(str2, "
")] = NULL;
    if (strcmp(str1, str2) == 0) {
        printf("Strings are Equal
");
    } else {
        printf("Strings are not Equal
");
    }

    return 0;
}