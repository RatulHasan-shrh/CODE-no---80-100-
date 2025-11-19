

#include <stdio.h>

int main() {
    int a[10][10], r, c;
    
    

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    

    for (int i = 0; i < r; i++) {
        int temp = a[i][0];
        a[i][0] = a[i][c - 1];
        a[i][c - 1] = temp;
    }

    printf("\nMatrix after interchanging first and last column:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;

