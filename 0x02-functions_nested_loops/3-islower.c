#include "holberton.h"
/**
 * _islower - entry point
 * @c: checks to see if char is lowercase
 * Return: Always 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
