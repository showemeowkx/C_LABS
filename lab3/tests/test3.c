#include <stdio.h>

int main(void){
    int i, j, n=7;
    int num1ID, num2ID;
    double num1=0;
    double num2=0;

    double matrix[7][7]={{0, -1, 0, -1, 0, -1, 0},
                       {-1, 0, -1, 0, -1, 0, -1},
                       {0, -1, 0, -1, 0, -1, 0},
                       {-1, 0, -1, 0, -1, 0, -1},
                       {0, -1, 0, -1, 0, -1, 0},
                       {-1, 0, -1, 0, -1, 0, -1},
                       {0, -1, 0, -1, 0, -1, 0}};

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