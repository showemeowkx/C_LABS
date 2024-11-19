#include <stdio.h>
#include <math.h>

int main(void) {
    int n, m, i, j, D, U, midIndex, foundValue, nullCouter = 0;
    double x;

    m = 7;
    n = 7;

    double matrix[7][7]={{56,23,47,34,12,54,89},
                        {45,20,45,30,11,49,75},
                        {38,19,43,18,11,38,70},
                        {27,19,33,15,10,35,61},
                        {23,17,30,11,10,30,55},
                        {19,15,18,8,6,19,39},
                        {12,4,3,0,2,11,5}};
    int values[m];

    printf("Input matrix:\n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%5.2lf\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Enter the required value: ");
    scanf("%lf", &x);
    
    for (i=0; i<m; i++) {
        if (foundValue==0) {
            nullCouter+=1;
        }
        else foundValue = 0;
        U = 0;
        D = m-1;
        while (U<D && foundValue==0) {
            if (matrix[U][i]==x) {
                foundValue = 1;
                values[i] = U;
            }
            else {
                midIndex = floor((U+D)/2);
                if (matrix[midIndex][i]>x) {
                    U = midIndex+1;
                }
                else D = midIndex;
            }
        }
        if (foundValue==0) {
            if (matrix[D][i]==x) {
                values[i] = D;
                foundValue = 1;
            }
            else values[i] = m;
        }  
    }

    if (nullCouter==m-1) {
        printf("Error! There are no elements such as <%.2lf>.", x);
    }
    else {
        printf("The elements were found in the following positions:\n");
        for (i=0; i<m; i++) {
            if (values[i]<m) printf("[%d][%d] ", values[i], i);
        }
    }

    return 0;
}