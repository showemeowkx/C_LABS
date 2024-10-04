#include <stdio.h>
#include <math.h>

int main(void) {

    double P=1;
    double p=0;
    int ct = 0;
    int n;
    int i;
    int j;

    printf("Welcome! Input n: ");
    scanf("%i", &n);

    if (n<=0){
        printf("Error: n should be greater than 0!\n");
    }
    else {
        for (i=1; i<=n; i++) {
            while (j<=i) {
                p+=j+sin(j);
                j+=1;
                ct+=6;
            }
            P*=((i*i)+1)/p;
            ct+=7;
        }
        
        printf("Result: %.7lf\n", P);
    }
    ct+=1;
    printf("Operations quantity: %i\n", ct);

    return 0;
}