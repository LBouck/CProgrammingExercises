#include <stdio.h>

main(){

  float celsius, fahr;
  int lower = 0;
  int upper = 300;
  int step = 20;
  fahr = lower;
  while (fahr <= upper){
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3f %6.1f\n",fahr,celsius);
    fahr += step;
  }
}
