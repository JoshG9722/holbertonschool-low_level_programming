#include "holberton.h"
/**
  * puts_half - prints half of string
  * @s: takes string
  */
void puts_half (char *str)
{
    int i, hlf, lngth;
    
    for (i = 0; str[i] != '\0'; i++)
            lngth++;
            
    if (!(lngth % 2))
            hlf = lngth / 2;
    else
            hlf = (lngth + 1) / 2;
    for (i = hlf; str[i] != '\0'; i++)
            _putchar(str[i]);
    _putchar('\n');
}