#include "holberton.h"
/**
 * print_last_digit - entry point
 * @n: num passed to function
 * Return: always 0(success)
 */
int print_last_digit(int);
{
    	int i;

	if (n < 0)
	{
		i = (-1 * (n % 10));
		_putchar(i + '0');
	}
	else
	{
		i = (n % 10);
		_putchar(i + '0');
	}
	return (0);
}
