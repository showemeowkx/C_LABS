#include <stdio.h>
#include <math.h>

int main(void) {

    double product=1;
    double sum=0;
    int ct=0;
    int n;
    int i;

    printf("Welcome again! Input n: ");
    scanf("%i", &n);

    if (n<=0) {
        printf("Error: n should be greater than 0!\n");
    }
    else {
        for (i=1; i<=n; i++) {
            sum+=i+sin(i);
            product*=((i*i)+1)/sum;
            ct+=10;
        }
        ct+=1;
        printf("Result: %.7lf\n", product);
    }
    ct+=4;
    printf("Operations done: %i\n", ct);

    return 0;
}