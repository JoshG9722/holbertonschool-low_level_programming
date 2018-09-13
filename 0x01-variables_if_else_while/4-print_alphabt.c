#include <stdio.h>
/**
    * main - entry point
    * Return: always 0 (success)
    **/
    int main(void)
    {
            char al;

            for (al = 'a'; al <= 'z'; al++)
            {
                    if (al != 'e' && al != 'q')
                            putchar(al);
            }
            putchar('\n');
            return(0);
    }
