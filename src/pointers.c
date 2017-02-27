#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
        char* name;
        name = "bob";
        char* first;
        first = &name[0];
        first = "george";
        
        printf("Name is \t %s \n", name);
        printf("Firs letter of name is \t %s\n", first);
}
