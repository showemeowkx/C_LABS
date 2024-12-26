#include <stdio.h>

int main(void) {
    int n, m, i, j, k, T;

    printf("Enter the size of your matrix (2 values separated by space): <rows collumns>\n");
    scanf("%d %d", &m, &n);

    if ((m<7 || m>10) || (n<7 || n>10)) {
        printf("Error! The size values should be between 7 and 10.");
        return 0;
    }

    int matrix[m][n];

    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("Enter a value for element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Input matrix:\n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%5d\t", matrix[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<m; i++){
        for (j=1; j<n; j++) {
            T = matrix[i][j];
            k = j;

            while (T>matrix[i][k-1] && k>0) {
                matrix[i][k] = matrix[i][k-1];
                k--;
            }

            matrix[i][k] = T;
        }
    }

    printf("Sorted matrix:\n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%5d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}