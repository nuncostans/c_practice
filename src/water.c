#include <cs50.h>
#include <stdio.h>

int main(void)
{
        printf("Give me shower time: ");
        int user_input = GetInt();
        int bottles = user_input * 12;
        printf("minutes: %i\nbottles: %i\n", user_input, bottles);
}
