#include "holberton.h"
/**
 * print_most_numbers - printing 0 through 9 with exceptions
 * @void:
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
