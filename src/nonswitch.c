#include <cs50.h>
#include <stdio.h>

int main(void)
{
        printf("Please give me an integer between 1 and 10: ");
        int myInt;
        int n = scanf("%d", &myInt);

        if (myInt >= 1 && myInt <= 3)
        {
                printf("You picked a small int!\n");
        }
        else if (myInt >=4 && myInt <= 7)
        {
                printf("You picked a medium int\n");
        }
        else if (myInt >= 8 && myInt <=10)
        {
                printf("You picked a large number\n");
        }
        else
        {
                printf("You picked an invalid int\n");
        }
        printf("%i", n);
}
