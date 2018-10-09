#include "holberton.h"
/**
 * _abs - entry point
 * @n: num passed to function
 * Return: n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n + (n * -2));
	}
}
