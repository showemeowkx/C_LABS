#include <stdio.h>
#include <math.h>

int main(void) {

    double P=1;
    double p=0;
    int n;
    int i;

    printf("Welcome again! Input n: ");
    scanf("%i", &n);

    if (n<0) {
        printf("Error: n should be greater or equal to 0!\n");
    }
    else {
        for (i=1; i<=n; i++) {
            p+=i+sin(i);
            P*=((i*i)+1)/p;
        }
    }

    printf("Result: %.7lf", P);

    return 0;
}