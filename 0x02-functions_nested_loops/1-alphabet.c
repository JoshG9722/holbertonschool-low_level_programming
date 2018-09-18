#include "holberton.h"
/**
 * print_alphabet - entry point
 * Return: always 0 (success)
**/

void print_alphabet(void)
{
    int al;

	for (al = 'a'; al <= 'z'; al++)
		_putchar(al);
	_putchar('\n');
}
