#include <stdio.h>
main (){
float fahr;

for (fahr = 0; fahr <= 300; fahr += 20)
    printf("%3.2f : %6.2f\n", fahr, (5.0 / 9.0) * (fahr-32) );
}
