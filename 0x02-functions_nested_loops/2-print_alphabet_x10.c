#include "holberton.h"
/**
 * print_alphabet_x10 - entry point
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int al;
	int rpt;

	for (rpt = 0; rpt <= 9; rpt++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);
		}
		_putchar('\n');
	}
}
