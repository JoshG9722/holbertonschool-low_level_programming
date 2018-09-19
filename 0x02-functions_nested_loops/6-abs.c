#include "holberton.h"
/**
 * abs - entry point
 * @n: num passed to function
 * Return: value of n
 */
int _abs(int n)
{
if (n >= 0)
    return (n);
else
    return (n + (n * -2));
}
