#include <stdio.h>
#include <math.h>

int main(void) {

    double product=1;
    double sum=0;
    int ct = 0;
    int j;
    int n;
    int i;

    printf("Welcome! Input n: ");
    scanf("%i", &n);

    if (n<=0){
        printf("Error: n should be greater than 0!\n");
    }
    else {
        for (i=1; i<=n; i++) {
            sum=0;
            for (j=1; j<=i; j++) {
                sum+=j+sin(j);
                ct+=6;
            }
            product*=((i*i)+1)/sum;
            ct+=9;
        }
        ct+=1;
        printf("Result: %.7lf\n", product);
    }
    ct+=4;
    printf("Operations done: %i\n", ct);

    return 0;
}