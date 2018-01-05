#include <stdio.h>

main(){

  int celsius, fahr;
  int lower = 0;
  int upper = 300;
  int step = 20;
  fahr = lower;
  printf("|----------------------|\n");
  printf("| Fahrenheit | Celsius |\n");
  printf("|----------------------|\n");
  while (fahr <= upper){
    celsius = 5*(fahr-32)/9;
    printf("| %10d | %7d |\n",fahr,celsius);
    fahr += step;
  }
  printf("|----------------------|\n");
}