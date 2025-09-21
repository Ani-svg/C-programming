#include <stdio.h>

int main() {
    int mat[3][3];
    int i, j, sum = 0;

    printf("Enter elements:");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

 
    for (i = 0; i < 3; i++) {
        for (j = i; j < 3; j++) { 
            sum += mat[i][j];
        }
    }

    
    printf("Sum of upper triangle elements = %d\n", sum);

    return 0;
}
