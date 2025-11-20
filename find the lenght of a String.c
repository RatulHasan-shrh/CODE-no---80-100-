#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

                    int length = strlen(str);

           if (str[length - 1] == '\n') {
               length--;
    }

                         printf("Length of the string: %d\n", length);

    return 0;
}
