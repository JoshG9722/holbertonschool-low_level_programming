#include "holberton.h"
/**
  * _strcpy - copies string
  * @dest: destination string
  * @src: source string
  * Return: dest
  */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (j = 0; src[j] != '\0'; j++)
		;

	for (i = 0; i < j; i++)
		dest[i] = src[i];
	return (dest);
}
