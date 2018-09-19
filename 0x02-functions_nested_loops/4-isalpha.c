#include "holberton.h"
/**
 * _isalpha - entry point
 * @c: checks if char is upper or lowercase
 * Return: 0 or 1 depending on c
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
