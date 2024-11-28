#include <stdio.h>

int main(void) {
    int n, m, i, j, k;
    double T;

    n=8;
    m=7;

    double matrix[7][8]={{10,9,8,7,6,5,4,3},
                        {11,11,10,9,8,7,6,5},
                        {15,12,10,7,4,2,1,1},
                        {5,4,3,2,1,0,-1,-2},
                        {10,5,2.5,1.25,0,-1.25,-2.5,-5},
                        {5,5,5,5,5,5,1,1},
                        {22,20,18,16,14,12,10,8}};

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