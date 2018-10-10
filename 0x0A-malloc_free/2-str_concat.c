#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concats two strings
 * @s1: takes first string
 * @s2: takes second string
 * Return: pointer to string
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	char *r_ptr;

	i = 0;
	j = 0;
	k = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[i])
		i += 1;
	while (s2[j])
		j += 1;
	r_ptr = malloc((i + j) * sizeof(char) + 1);
	if (r_ptr == NULL)
		return (NULL);
	while (*s1)
	{
		r_ptr[k] = *s1++;
		k += 1;
	}
	while (*s2)
	{
		r_ptr[k] = *s2++;
		k += 1;
	}
	return (r_ptr);
}
