#include <stdio.h>
#include <assert.h>

 main(){
    float miles, kilometres;
    float step, lower, upper;
    lower = 0;
    upper = 300;
    step = 20;
    kilometres = lower;
    while (kilometres <= upper){
      miles = kilometres * 0.621;
      printf("%3.2f : %3.2f\n", kilometres, miles);
      kilometres += step;
    }
 }
