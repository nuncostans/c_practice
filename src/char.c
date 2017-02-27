#include <stdio.h>

int main()
{
        int c, nl;
        while ((c = getchar()) !=EOF)
        {
                if (c == ' ')
                {
                        ++nl;
                }
        }
        printf("%d\n", nl);
}
