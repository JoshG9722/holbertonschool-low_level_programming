#include "holberton.h"
/**
 * rot13 - encoding string using rot13
 * @s: takes string
 * Return: s
 */
char *rot13(char *s)
{
	int j;
	int i = 0;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		j = 0;
		while (a[j] != '\0')
		{
			if (s[i] == a[j])
			{
				s[i] = r[j];
				break;
			}
			j++;
		}
		i++;
	}
	return ((char *)s);
}
