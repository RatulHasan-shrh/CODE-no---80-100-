

#include <stdio.h>
#include <string.h>

void addBinary(char a[], char b[], char result[]) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int k = 0; 
    int carry = 0;

    char temp[1024];

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        temp[k++] = (sum % 2) + '0';
        carry = sum / 2;
    }

   
    for (int x = 0; x < k; x++)
        result[x] = temp[k - 1 - x];

    result[k] = '\0';
}

int main() {
    char a[512], b[512], result[1024];

    printf("Enter first binary string: ");
    scanf("%s", a);

    printf("Enter second binary string: ");
    scanf("%s", b);

    addBinary(a, b, result);

    printf("Sum = %s\n", result);

    return 0;
}
