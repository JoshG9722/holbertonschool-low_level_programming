#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, initializes with speficic char
 * @size: size of the array
 * @c: starting character
 * return: ar_ptr
 */
char *create_array(unsigned int size, char c)
{
  char *ar_ptr;
  unsigned int i;

  if (size == 0)
    {
      return (NULL);
    }
  else
    {
      ar_ptr = malloc(size * sizeof(c));
    }
  for(i = 0; i < size; i++)
    *(ar_ptr + i) = c;
  return(ar_ptr);
}
