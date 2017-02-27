#include <stdio.h>

int main()
{
        int decks;
        puts("Enter a number of deckd");
        scanf("%i", &decks);
        
        if(decks < 1)
        {
                puts("Its not valid number of decks");
                return 1;
        }
        printf("There are %i\n", decks);
        return 0;
} 
