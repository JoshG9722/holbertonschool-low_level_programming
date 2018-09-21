#include "holberton.h"
/**
 * print_most_numbers - printing 0-9 except 2 and 4
 * @void: Empty argument
 */
void print_most_numbers(void)
{
	char a;

	for (a = 0; a <= 9; a++)
	{
		if (a != 2 && a != 4)
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}