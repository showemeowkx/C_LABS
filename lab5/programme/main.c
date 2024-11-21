#include <stdio.h>

int main(void) {
    int n, m, i, j, D, U, midIndex, foundValue, nullCounter = 0;
    double x;

    printf("Enter the size of your matrix (2 values separated by space): <rows collumns>\n");
    scanf("%d %d", &m, &n);

    if ((m<7 || m>10) || (n<7 || n>10)) {
        printf("Error! The size values should be between 7 and 10.");
        return 0;
    }
    
    double matrix[m][n];
    int values[n];

    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            printf("Enter a value for element [%d][%d]: ", j, i);
            scanf("%lf", &matrix[j][i]);
            if (j>0 && matrix[j][i]>matrix[j-1][i]) {
                printf("Error! The values should be sorted in descending order.\n");
                printf("Element's [%d][%d] value was changed to %.2lf!\n", j, i, matrix[j-1][i]);
                matrix[j][i]=matrix[j-1][i];
            }
        }
    }

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