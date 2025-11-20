#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i;
  

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("First letters: ");
  

    
    if (str[0] != ' ' && str[0] != '\n')
        printf("%c ", str[0]);

   
    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i - 1] == ' ')
            printf("%c ", str[i]);
      
    }

    return 0;
}
