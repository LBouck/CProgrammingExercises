#include <stdio.h>

main(){

  float celsius, fahr;
  int lower = 0;
  int upper = 300;
  int step = 20;
  fahr = lower;
  printf("|----------------------|\n");
  printf("| Fahrenheit | Celsius |\n");
  printf("|----------------------|\n");
  while (fahr <= upper){
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("| %10.1f | %7.1f |\n",fahr,celsius);
    fahr += step;
  }
  printf("|----------------------|\n");
}