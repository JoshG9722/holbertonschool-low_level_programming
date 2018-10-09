#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function returns pointer to new string
 * @str: string that is being passed
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *str2;
	int i;
	int length;

	if (str == NULL)
	{
		return (NULL);
	}
	length = _strlen(str);
	str2 = malloc(length + 1 * sizeof(char));
	i = 0;
	while (i < length)
	{
		str2[i] = str[i];
		i++;
	}
	return (str2);
	free(str2);
}

/**
 * _strlen - prints length string in integer
 * @s: string passed to function
 * Return: a
 */
int _strlen(char *s)
{
	int a = 0;

	while (*(s + a))
		a++;

	return (a);
}
