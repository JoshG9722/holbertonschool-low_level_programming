#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates array of chars, initializes with specific char
 * @size: size of array
 * @c: intializing char
 * Return: ar_ptr
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar_ptr;

	ar_ptr = malloc(size * sizeof(char));

	if (ar_ptr == NULL || size == 0)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			ar_ptr[i] = (c);
			i++;
		}
		return (ar_ptr);
	}
}
