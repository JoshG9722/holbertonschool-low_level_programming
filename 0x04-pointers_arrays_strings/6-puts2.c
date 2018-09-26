#include "holberton.h"
/**
  * puts2 - prints one char out of two
  * @s: takes string
  */
void puts2 (char *str)
{
    int i;
    
    for (i = 0; str[i] != '\0'; i++)
            if (i % 2 == 0)
                    _putchar(str[i]);
    _putchar('\n');
}