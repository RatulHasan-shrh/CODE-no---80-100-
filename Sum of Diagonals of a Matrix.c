#include <stdio.h>

int main() {
    int a[10][10], n;
    int mainSum = 0, secSum = 0;

    printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }


    for (int i = 0; i < n; i++) {
        mainSum += a[i][i];
        secSum += a[i][n - 1 - i];
    }



           printf("\nSum of Main Diagonal = %d\n", mainSum);
           printf("Sum of Secondary Diagonal = %d\n", secSum);

    return 0;

}

