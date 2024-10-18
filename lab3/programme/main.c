#include <stdio.h>

int main(void){
    int i, j, n;
    int num1ID, num2ID;
    double num1=0;
    double num2=0;

    printf("Welcome! Enter the size of your matrix: ");
    scanf("%d", &n);

    double matrix[n][n];

    if (n>=7&&n<=10){
        for(i=0; i<n; i++){
            for(j=0; j<n ; j++){
                printf("Element [%d][%d]: ", i+1, j+1);
                scanf("%lf", &matrix[i][j]);
            }
        }

        printf("\nInput matrix:\n");
        for (i=0; i<=n-1; i++){
            for(j=0;j<=n-1;j++){
                printf("%.2lf\t", matrix[i][j]);
            }
        printf("\n");
        }

        // double matrix[7][7]={{1,1,1,1,1,1,1},
        //                     {1,1,1,1,1,1,1},
        //                     {1,1,1,1,1,1,1},
        //                     {1,1,1,1,1,1,1},
        //                     {1,1,1,1,1,1,1},
        //                     {1,1,1,1,1,1,1},
        //                     {1,1,1,1,1,1,1}};
        
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

        if (num1!=0&&num2!=0) {
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
        
    }
    else printf("Error! The size of matrix should be between or equal to 7 and 10.");

    return 0;
}