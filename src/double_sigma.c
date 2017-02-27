#include <cs50.h>
#include <stdio.h>

double sigma(double m);

int main(void)
{
        int n;
        do
        {
                printf("Positive integer please: ");
                n = GetInt();
        }
        while (n <1);
        int answer = sigma(n);
        printf("%i\n", answer);
}

double sigma(double m)
 {
         double sum = 0;
         for(int i = 1; i <= m; i ++)
         {
                 sum +=i;
         }
         return sum;
 }
 
