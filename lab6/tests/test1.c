#include <stdio.h>

int main(void) {
    int n, m, i, j, k, T;

    n=7;
    m=7;

    int matrix[7][7]={{5,6,4,2,8,10,11},
                        {1,7,2,9,2,5,2},
                        {8,3,5,1,8,3,2},
                        {11,11,11,9,8,7,6},
                        {15,12,10,7,4,1,1},
                        {29,30,31,32,33,34,35},
                        {22,23,24,25,26,27,28},};

    printf("Input matrix:\n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%5d\t", matrix[i][j]);
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
            printf("%5d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}