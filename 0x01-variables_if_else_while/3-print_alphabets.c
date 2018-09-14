#include <stdio.h>
/**
    * main - entry point
    * Return: always 0 (success)
    **/
    int main(void)
    {
        char al;
        char Upal;

        for (al = 'a'; al <= 'z'; al++)
        {
                putchar(al);
        }

        for (Upal = 'A'; Upal <= 'Z'; Upal++)
        {
                putchar(Upal);
        }
        putchar('\n');
        return(0);
    }
