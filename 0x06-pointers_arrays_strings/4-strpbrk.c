#include "holberton.h"
/**
 * _strpbrk - searches string for any set of bytes
 * @s: string
 * @accept: string comparing string 
 * Return: '/0' or s+i
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
