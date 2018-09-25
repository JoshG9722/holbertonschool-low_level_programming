#include "holberton.h"
/**
 * _strlen - returns length of string
 * @s: takes a string
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;

	return (i);
}
