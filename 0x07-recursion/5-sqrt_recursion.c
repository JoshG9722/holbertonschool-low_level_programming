#include "holberton.h"
int natural(int i, int j);
/**
 * _sqrt_recursion - returns the natural square root of a num
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (n);
	if (n <= 0)
		return (-1);
	return (natural(1, n));
}

/**
 * natural - returns natural square root of a num
 * @base: int
 * @goal: int
 * Return: integer
 */
int natural(int i, int j)
{
	if (i == j)
		return (-1);
	if (i * i == j)
		return (i);
	return (natural(i + 1, j));
}
