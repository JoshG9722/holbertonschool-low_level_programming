#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space in memory, which contains copy of the string given as parameter
 * @str: Takes string
 *
 * Return: Pointer to the newly allocated space in memory
 */

char *_strdup(char *str)
{
	int length = 0;
	char *str2;
	char *a;

	while (str[length])
		length++;

	str2 = (char *)malloc(sizeof(char) * (length + 1));
	a = str2;

	while (*str)
		*a++ = *str++;

	*a = '\0';

	return (str2);
}
