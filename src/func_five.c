#include <stdio.h>

int five_times(int n);

int main(void){
        //  define own type
        
        typedef struct
        {
                float x;
                float y;
        }
        point;
        
        // use own type
        point p;
        p.x = 2;
        p.y = 3;
        printf("Sum of points is %1.2f\n", p.x + p.y);
        // use function
        five_times(5);
}

int five_times(int n)
{
        int i = 0;
        do
        {
                printf("Hello, world\n");
                i++;
        }
        while(i<n);
        
        return 0;
}
