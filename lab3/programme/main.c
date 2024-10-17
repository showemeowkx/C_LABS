#include <stdio.h>

void linearSearch(double inputMatrix[7][7]){
    int i;
    int j;
    int num1ID;
    int num2ID;
    double num1;
    double num2;
    double mainDiagonale[7]={};

    for (i=0; i<7; i++){
        if (inputMatrix[i][i]>0) {
            num1=inputMatrix[i][i];
            num1ID=i;
            break;
        }
    }    
    for (i=6; i>=0; i--){
        if (inputMatrix[i][i]<0){
            num2=inputMatrix[i][i];
            num2ID=i;
            break;
        }
    }

    if (num1&&num2) {
        inputMatrix[num1ID][num1ID]=num2;
        inputMatrix[num2ID][num2ID]=num1;
        printf("\nOutput matrix\n----------------------------------------------");
        for (i=0; i<7; i++){
            printf("\n");
            for(j=0;j<7;j++){
                printf("%.2lf ", inputMatrix[i][j]);
            }
        }
        printf("\n----------------------------------------------");
    }
    else printf("error");

    // for (i=0; i<7; i++){
    //     // printf("i: %d\n", i);
    //     // printf("matrix element: %lf\n", inputMatrix[i][i]);
    //     mainDiagonale[i]=inputMatrix[i][i];
    // }

    // for (i=0; i<7; i++){
    //     if(mainDiagonale[i]>0){
    //         num1[0]=i;
    //         num1[1]=mainDiagonale[i];
    //         break;
    //     }
    // }

    // for (i=6; i>=0; i--){
    //     if(mainDiagonale[i]<0) {
    //         num2[0]=i;
    //         num2[1]=mainDiagonale[i];
    //         break;
    //     }
    // }

    // if (num1[0]&&num1[1]&&num2[0]&&num2[1]) {
    //     mainDiagonale[num1[0]]=num2[1];
    //     mainDiagonale[num2[0]]=num1[1];
    // }

    
    // // printf("num1: %.2lf\nnum2:%.2lf\n", num1[1], num2[1]);
}

int main(void){
    double matrix1[7][7] = { {-1, 3, 4, -2, -1, 1, 6}, 
                        {-1, 0, 9, 1, -3, -6, -8}, 
                        {10, -10, 0, -4, -6, 10, 9},
                        {-9, 1, 10, 1, 6, -4, -9},
                        {10, -6, 4, 4, -5, -1, 1},
                        {-2, 10, -1, 2, 6, -8, -2},
                        {1, 7, 2, -1, -6, 0, -4}};

    double matrix2[7][7] = { {-6, 4, 5, 2, -8, -7, -10}, 
                        {5, -4, 5, 2, 3, -3, -5}, 
                        {4, 5, -2, -7, 2, 4, -8},
                        {7, 4, 7, 5, 3, -10, 3},
                        {-8, -9, 3, 8, 6, 4, 7},
                        {4, -1, 3, 8, -6, 10, -3},
                        {-4, -1, 8, -7, -6, 0, -2}};

    double matrix3[7][7] = { {-9, -3, 5, -4, 0, 1, -1}, 
                        {-10, -10, 5, 2, -1, -2, 1}, 
                        {-8, -7, 4, 8, -6, 9, -9},
                        {8, -4, -1, -7, -9, 3, 10},
                        {0, 7, -9, 1, -1, 1, 5},
                        {-7, -6, 5, 3, 7, 1, 5},
                        {10, -6, 3, 10, 3, 8, 4}};

    linearSearch(matrix1);

    linearSearch(matrix2);

    linearSearch(matrix3);

    return 0;
}