#include <stdio.h>

main(){

  int celsius, fahr;
  int lower = 0;
  int upper = 300;
  int step = 20;
  celsius = lower;
  printf("|----------------------|\n");
  printf("| Celsius | Fahrenheit |\n");
  printf("|----------------------|\n");
  while (celsius <= upper){
    fahr = 9*celsius/5 + 32;
    printf("| %7d | %10d |\n",celsius,fahr);
    celsius += step;
  }
  printf("|----------------------|\n");
}