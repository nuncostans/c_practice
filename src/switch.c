#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int n;
        printf("Give me an int between 1 and 10: ");
        scanf("%d", &n);

        switch(n)
        {
        case 1:
        case 2:
        case 3:
                printf("You picked a small number\n");
                break;
        case 4:
        case 5:
        case 6: 
        case 7:
                printf("You picked a medium number\n");
                break;
        case 8: 
        case 9:
        case 10:
                printf("You picked a large number\n");
                break;
        default:
                printf("You picked an invalid int\n");
                break;
        }
}
