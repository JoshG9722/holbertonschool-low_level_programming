#include "holberton.h"
/**
  * char *_strncat - concatenates two strings
  * @dest: destination string
  * @src: source string
  * @n: num of bytes
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	return (dest);
}