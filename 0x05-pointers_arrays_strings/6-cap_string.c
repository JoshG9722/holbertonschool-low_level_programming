#include "holberton.h"
/**
 * cap_string - capitalizes all words of string
 * @str: takes string
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (i == 0)

	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		else if (str[i - 1] == 32||'\t'||'\n'||','||';'||'.'||'!'||'?'||
			 '"'||'('||')'||'{'||'}')
			str[i] -= 32;
	}
	}
	return (str);
}
