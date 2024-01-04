#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1000 

int main() {
    char input[MAX_LENGTH];

    
    fgets(input, sizeof(input), stdin);

    
    if (input[strlen(input) - 1] == '
') {
        input[strlen(input) - 1] = NULL;
    }


    printf("%s
", input);

    return 0;
}