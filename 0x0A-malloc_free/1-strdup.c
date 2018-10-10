#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates string
 * @str: takes string
 * Return: dup
 */

char *_strdup(char *str)
{
	int i, str_len;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (str_len = 0; str[str_len]; str_len++)
		;
	dup = malloc((sizeof(char) * str_len) + 1);
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < str_len; i++)
		dup[i] = str[i];

	return (dup);
}
