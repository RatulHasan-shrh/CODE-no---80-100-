#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int freq[26] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
                for (i = 0; str[i] != '\0'; i++) {
                   char ch = tolower(str[i]);  
                         if (ch >= 'a' && ch <= 'z') {
                                 freq[ch - 'a'] = 1;     
        }
    }

   
          for (i = 0; i < 26; i++) {
        if (freq[i] == 0) {
            printf("Not a Pangram\n");
            return 0;
        }
    }
  

    printf("Pangram String\n");
    return 0;
}
