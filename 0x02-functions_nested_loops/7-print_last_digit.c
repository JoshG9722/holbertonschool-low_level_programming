#include "holberton.h"
/**
 * print_last_digit - entry point
 * @n: num passed to the function
 * Return: Value of last digit
 */
int print_last_digit(int n)
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
	return (i);
}
