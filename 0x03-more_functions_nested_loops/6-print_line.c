#include "holberton.h"
/**
 *print_line - printing line across terminal with variable passed
 * @n: variable passed to function
 */
void print_line(int n)
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
