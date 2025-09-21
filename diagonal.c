#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the matrix : ");
    scanf("%d", &n);

    int matrix[n][n];
    int i, j, sum = 0, product = 1;

  
    printf("Enter elements of %dx%d matrix:", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (i = 0; i < n; i++) {
        int element = matrix[i][n - 1 - i]; 
        sum += element;
        product *= element;
    }

    
    printf("Sum of anti-diagonal elements = %d\n", sum);
    printf("Product of anti-diagonal elements = %d\n", product);

    return 0;
}
