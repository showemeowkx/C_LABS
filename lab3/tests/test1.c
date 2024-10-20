#include <stdio.h>

int main(void){
    int i, j, n=8;
    int num1ID, num2ID;
    double num1=0;
    double num2=0;

    double matrix[8][8]={{8, -10, 0, 5, 7, -2, 5, -3},
                       {10, -4, 9, -7, -2, -5, -5, 7},
                       {9, -2, -10, -1, 10, 1, 10, 9},
                       {1, 6, -4, 10, -3, 5, 0, -5},
                       {1, 0, -10, -1, -8, 0, -7, 5},
                       {0, -3, -10, 4, 9, -10, -9, 9},
                       {2, -1, 10, -7, -1, 4, 7, -5},
                       {5, -6, 8, 3, -1, 5, -1, 2}};

    printf("\nInput matrix:\n");
    for (i=0; i<=n-1; i++){
        for(j=0;j<=n-1;j++){
            printf("%.2lf\t", matrix[i][j]);
        }
    printf("\n");
    }
    
    for (i=0; i<=n-1; i++){
        if (matrix[i][i]>0){
            num1=matrix[i][i];
            num1ID=i;
            break;
        }
    }    

    for (i=n-1; i>=0; i--){
        if (matrix[i][i]<0){
            num2=matrix[i][i];
            num2ID=i;
            break;
        }
    }

    if (num1!=0&&num2!=0){
        matrix[num1ID][num1ID]=num2;
        matrix[num2ID][num2ID]=num1;
        printf("\nOutput matrix:\n");
        for (i=0; i<=n-1; i++){
            for(j=0;j<=n-1;j++){
                printf("%.2lf\t", matrix[i][j]);
            }
        printf("\n");
        }
    }
    else printf("\nError! Not found!");
        
    return 0;
}