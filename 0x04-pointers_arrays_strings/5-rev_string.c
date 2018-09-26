#include "holberton.h"
/**
  * rev_string - reverses string
  * @s: takes string
  */
void rev_string(char *s)
{
    int i, j = 0;
    char temp;
    
    while (s[j] != '\0')
        j++;
    j--;
    
    for (i=0; i < j; j--, i++)
    {
        temp = s[i];
        s[i] = s[j];
        s[i] = temp;
    }
}