#include <stdio.h>

main(){

  float celsius, fahr;
  int lower = 0;
  int upper = 300;
  int step = 20;
  celsius = lower;
  printf("|----------------------|\n");
  printf("| Celsius | Fahrenheit |\n");
  printf("|----------------------|\n");
  while (celsius <= upper){
    fahr = 9.0*celsius/5.0 + 32.0;
    printf("| %7.1f | %10.1f |\n",celsius,fahr);
    celsius += step;
  }
  printf("|----------------------|\n");
}