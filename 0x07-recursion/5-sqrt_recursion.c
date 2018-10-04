#include "holberton.h"
/**
 * _sqrt_recursion - function to return natural square root
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (natural_sqr(n, 1));
}

/**
 * natural_sqr - helper function
 * @n: int
 * @i: int
 * Return: int
 */
int natural_sqr(int n, int  i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (natural_sqr(n, i = i + 1));
}
