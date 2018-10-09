#include "holberton.h"
/**
 * more_numbers - repeats num loop
 * void - empty argument
 */
void more_numbers(void)
{
	char rpt = 0;
	char num;

	while (rpt <= 9)
	{
		for (num = 0 ; num <= 14 ; num++)
		{
			if (num >= 10)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		rpt++;
		_putchar('\n');
	}
}
