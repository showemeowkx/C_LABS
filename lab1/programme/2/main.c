#include <stdio.h>

int main(void) {
  printf("Welcome again!\nInput x: ");

  float x;
  float y;

  scanf("%f", &x);

  if (x>0 && x<=5) {
    y = (x*x*x)-5*(x*x);
    printf("Found y value: %f\n", y);
  }
  else if ((x>=-32&&x<-20)||x>10) {
    y = (x*x)-3;
    printf("Found y value: %f\n", y);
  }
  else printf("There is no value for such x!\n");
  
  return 0;
}