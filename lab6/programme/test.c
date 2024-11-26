#include <stdio.h>

int main(void) {
    int n, m, i, j, k, check_pos;
    double T;

    double array[7]={1,2,3,4,5,6,7};

    for (i=1; i<7; i++) {
        T = array[i];
        j = i;

        printf("\nT: %lf\n", T);

        while(j>0){
            if (T>array[j-1]){
                array[j] = array[j-1];
                array[j-1] = T;
            }
            j--;
        }

        printf("\n---I:%d---\n", i);
        for (k=0; k<=6; k++){
            printf("%lf ", array[k]);
        }
    }

    return 0;
}