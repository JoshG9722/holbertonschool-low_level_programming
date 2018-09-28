#include <stdio.h>
/**
  * cap_string - capitalizes all words of a string
  * @s: takes string 
  * Return: a
  */
char *cap_string(char *s)
{
	char a;
	int i;

	a = s;
	i = 1;
	while (*s != '\0')
	{
		if (i)
		{
			if (*s >= 'a' && *s <= 'z')
				*s -= 32;
			i = 0;
		}
		if (!i)
		{
			if (*s == '.' || *s == ' ' || *s == '!')
				i = 1;
			else if (*s == '\n' || *s == '\t')
				i = 1;
		}
		s++;
	}
	return (a);
}
