#include "holberton.h"
#include <stdlib.h>
/**
  * create_array - creates array of chars, initialized with specific char
  * @size: size of array
  * @c: starting char
  * Return: ar_ptr
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
	for (i = 0; i < size; i++)
		*(ar_ptr + i) = c;
	return (ar_ptr);
}
