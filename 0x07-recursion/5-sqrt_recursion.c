#include "holberton.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: int
 * Return: square root or -1
*/
int _sqrt_recursion(int n)
{
	return (natural(n, 1));
}

/**
 * natural - helper function for _sqrt_recursion
 * @i: int
 * @j: int
 * Return: square root or -1
 */

int natural(int i, int j)
{
	int square = j * j;

	if (square > i)
		return (-1);
	if (square == i)
		return (j);
	else
		return (natural(i, j + 1));

}
