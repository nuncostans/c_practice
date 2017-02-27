#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int m;
        int* a;
        int* b = malloc(sizeof(int));
        a = &m;
        a = b;
        m = 10;
        *b = m + 2;
        free(b);
        *a = 11; //may be segmetation false
        /*
          int* a is pointer;
          int m is peace of memory;
          int* b = malloc(sizeof(int)) is pointer to 8 bytes of memory
          and so on
         */
}
