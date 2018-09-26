#include "holberton.h"
/**
  * print_rev - prints a string in reverse
  * @s: takes string
  */
void print_rev(char *s)
{
	int i = 0, a;

	while (s[a] != '\0')
		a++;
	a--;
	for (i = a; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
