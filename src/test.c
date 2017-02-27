#include <cs50.h>
#include <stdio.h>

void print_name(string name);

int main(void)
{
        string s = GetString();
        print_name(s);
}

void print_name(string name){
    printf("hello, world, %s", name);
}
