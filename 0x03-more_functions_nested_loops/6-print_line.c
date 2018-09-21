#include "holberton.h"
/**
 *print_line - prints line n amount of times
 * @n: var passed to function
 */
void main (int n)
{
	char i;
	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
