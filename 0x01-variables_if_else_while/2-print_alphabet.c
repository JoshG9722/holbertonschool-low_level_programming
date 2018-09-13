#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
    * main - entry point
    * Return: always 0 (success)
    */
    int main(void)
    {
        char al;

        for(al = 'A'; al <= 'Z'; al++){
            putchar(al);
    }
        putchar ('\n');
        return (0);
    }
