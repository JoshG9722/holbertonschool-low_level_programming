#include "holberton.h"
/**
 * print_numbers - prints nums 0 to 9
 * void - Empty argument
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
