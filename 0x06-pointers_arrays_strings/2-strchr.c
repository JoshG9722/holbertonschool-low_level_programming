#include "holberton.h"
/**
  * _strchr - locates character in string
  * @s: string
  * @c: character
  * Return: s + i
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			break;
	}
	if (s[i] == c)
		return (s + i);
	return ('\0');
}