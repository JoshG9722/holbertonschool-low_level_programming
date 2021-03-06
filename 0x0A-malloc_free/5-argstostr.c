#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concats all arguments of program
 * @ac: counts arguments
 * @av: arguments
 * return: NULL or str
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			;
		size += j + 1;
	}
	str = malloc(size + 1);
	if (str == 0)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}
