#include <stdio.h>

int main(void) {
    int n, m, i, j, D, U, midIndex, foundValue, nullCounter = 0;
    double x;

    m = 7;
    n = 9;

    double matrix[7][9]={{56,23,47,34,12,54,89,89,67},
                        {45,20,45,30,11,49,75,65,54},
                        {38,19,43,18,11,38,70,45,49},
                        {27,19,33,15,10,35,61,31,40},
                        {23,17,30,11,10,30,55,20,19},
                        {19,15,18,8,6,19,39,15,11},
                        {12,4,3,0,2,11,5,11,8}};

    // double matrix[9][7]={{56,23,47,34,12,54,89},
    //                 {45,20,45,30,11,49,75},
    //                 {38,19,43,18,11,38,70},
    //                 {27,19,33,15,10,35,61},
    //                 {23,17,30,11,10,30,55},
    //                 {19,15,18,8,6,19,39},
    //                 {12,4,3,0,2,11,5},
    //                 {11,4,2,0,1,10,5},
    //                 {9,3,2,0,0,9,2}};
    int values[n];

    printf("Input matrix:\n");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            printf("%5.2lf\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Enter the required value: ");
    scanf("%lf", &x);
    
    for (i=0; i<n; i++) {
        U = 0;
        D = m-1;
        foundValue = 0;
        while (U<D && foundValue==0) {
            if (matrix[U][i]==x) {
                foundValue = 1;
                values[i] = U;
            }
            else {
                midIndex = (U+D)/2;
                if (matrix[midIndex][i]>x) {
                    U = midIndex+1;
                }
                else D = midIndex;
            }
        }
        if (foundValue==0) {
            if (matrix[D][i]==x) {
                values[i] = D;
            }
            else {
                values[i] = m+1;
                nullCounter++;
            }
        }  
    }

    if (nullCounter!=n){
        printf("The elements were found in the following positions:\n");
        for (i=0; i<n; i++) {
            if (values[i]<m+1) printf("[%d][%d] ", values[i], i);
        }
    }
    else printf("Error! There are no elements such as <%.2lf>.", x);

    return 0;
}