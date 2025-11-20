#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int index;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
  

    printf("Enter the index: ");
    scanf("%d", &index);

    int len = strlen(str);
  

    if (index < 0 || index >= len - 1) {
        printf("Invalid index!\n");
        return 0;
    }
    

    unsigned char ch = str[index];  

    printf("Character at index %d: %c\n", index, ch);
    printf("Unicode/ASCII code point: %d\n", ch);
  

    return 0;
}
