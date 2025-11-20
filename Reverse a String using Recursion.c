#include <stdio.h>
#include <string.h>

void reverseString(char str[], int index) {
    if (index < 0)
        return;

    printf("%c", str[index]);
    reverseString(str, index - 1);
}



int main() {
    char str[100];

               printf("Enter a string: ");
               fgets(str, sizeof(str), stdin);

    int len = strlen(str);

   
         if (str[len - 1] == '\n') {
           str[len - 1] = '\0';
             len--;
    }

    printf("Reversed string: ");
    reverseString(str, len - 1);

    return 0;
}
