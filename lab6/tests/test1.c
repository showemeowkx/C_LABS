#include <stdio.h>

int main(void) {
    int n, m, i, j, k;
    double T;

    n=7;
    m=7;

    double matrix[7][7]={{5,6,4,2,8,10,11},
                        {1,7,3,9,2,5,4},
                        {6,3,5,1,8,3,2},
                        {8,5,3,1,4,6,7},
                        {10,3,1,7,8,4,2},
                        {11,12,4,7,2,3,1},
                        {8,9,3,2,5,7,10}};

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