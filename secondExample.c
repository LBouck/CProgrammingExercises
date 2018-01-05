#include <stdio.h>

main(){

  int celsius, fahr;
  int lower = 0;
  int upper = 300;
  int step = 20;
  fahr = lower;
  while (fahr <= upper){
    celsius = 5*(fahr-32)/9;
    printf("%3d %6d\n",fahr,celsius);
    fahr += step;
  }
}
