#include "holberton.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @s: takes string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion((char *)s + 1);
		_putchar(*s);
	}
}
