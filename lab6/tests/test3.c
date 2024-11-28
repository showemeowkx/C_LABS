#include <stdio.h>

int main(void) {
    int n, m, i, j, k;
    double T;

    n=7;
    m=10;

    double matrix[10][7]={{1,2,3,4,5,6,7},
                        {8,9,10,11,12,13,14},
                        {15,16,17,18,19,20,21},
                        {22,23,24,25,26,27,28},
                        {29,30,31,32,33,34,35},
                        {29,30,31,32,33,34,35},
                        {22,23,24,25,26,27,28},
                        {15,16,17,18,19,20,21},
                        {8,9,10,11,12,13,14},
                        {1,2,3,4,5,6,7}};

    printf("Input matrix:\n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%5.2lf\t", matrix[i][j]);
        }
        printf("\n");
    }

    for (i=0; i<m; i++){
        for (j=1; j<n; j++){
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
            printf("%5.2lf\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}