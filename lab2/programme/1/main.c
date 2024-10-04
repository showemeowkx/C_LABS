#include <stdio.h>
#include <math.h>

int main(void) {

    double P=1;
    double p=0;
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
            for (j=1; j<=i; j++) {
                p+=j+sin(j);
                ct+=6;
            }
            P*=((i*i)+1)/p;
            p=0;
            ct+=8;
        }
        
        printf("Result: %.7lf\n", P);
    }
    ct+=1;
    printf("Operations done: %i\n", ct);

    return 0;
}