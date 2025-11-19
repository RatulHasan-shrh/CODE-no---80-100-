

#include <stdio.h>

int main() {
    int a[10][10], r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int top = 0, bottom = r - 1, left = 0, right = c - 1;

    while (top < bottom && left < right) {
        int prev = a[top + 1][left];
        int temp;

        for (int i = left; i <= right; i++) {
            temp = a[top][i];
            a[top][i] = prev;
            prev = temp;
        }
        top++;

       
        for (int i = top; i <= bottom; i++) {
            temp = a[i][right];
            a[i][right] = prev;
            prev = temp;
        }
        right--;

        
        for (int i = right; i >= left; i--) {
            temp = a[bottom][i];
            a[bottom][i] = prev;
            prev = temp;
        }
        bottom--;

        for (int i = bottom; i >= top; i--) {
            temp = a[i][left];
            a[i][left] = prev;
            prev = temp;
        }
        left++;
    }

    printf("\nMatrix after rotation:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
