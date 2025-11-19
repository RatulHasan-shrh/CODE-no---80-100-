

include <stdio.h>
#include <math.h>



int main() {
    int a[10][10], n;
    float trace = 0, normal = 0;

  

    printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

          
            normal += a[i][j] * a[i][j];

           
            if (i == j) {
                trace += a[i][j];
            }
        }
    }

  

    normal = sqrt(normal);

    printf("\nTrace of the matrix = %.2f\n", trace);
    printf("Normal of the matrix = %.2f\n", normal);




  

    return 0;
}
