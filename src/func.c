#include <stdio.h>

int power(int, int);

int main ( ) {
    printf("%d\n", power(3,10));
    return 0;
}
//inline comment
/*
  multi
  line
  comment
 */
int power(int base, int n) {

    int i, p;
    p = 1;

    if (base < 0) {
        return 0;
    }
    else {
    for (i =1; i <= n; ++i)
        p *= base;

    return p;
    }
}
