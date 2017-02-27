#include <cs50.h>
#include <stdio.h>

#include "student.h"

#define STUDENTS 3


int main(void)
{
        student students[STUDENTS];

        for (int i = 0; i< STUDENTS; i++ )
        {
                printf("Name: ");
                students[i].name = GetString();

                printf("Dorm: ");
                students[i].dorm = GetString();
        }
        
        FILE *file = fopen("contacts.org", "a");

        if (file != NULL)
        {
                for (int i = 0; i < STUDENTS; i++){
                        fprintf(file, "| %s | %s |\n", students[i].name, students[i].dorm);
                }
                fclose(file);
        }
        else
        {
                return 1;
        }
        return 0;
}
