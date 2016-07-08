#include <stdio.h>

// BEGIN (write your solution here)
main(){
    int cels, kelvin;
    int step, lower, upper;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    cels = lower;
    
    while(cels <= upper){
    kelvin = cels + 273;
    printf("%d : %d\n", cels, kelvin);
    cels += step;
    }
}
// END
