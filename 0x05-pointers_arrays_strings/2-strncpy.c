#include "holberton.h"
/**
  * char *_strncpy - copies string
  * @dest: destination of string
  * @src: source of string
  * @n: byte of src
  * Return: dest(success)
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j;

	while (src[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for (; n > i; i++)
		dest[i] = '\0';
	return (dest);
}
