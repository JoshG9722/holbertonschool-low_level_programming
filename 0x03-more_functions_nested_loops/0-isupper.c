#include "holberton.h"
/**
 * _isupper - entry point
 * @c: checks if char is uppercase
 * Return: Either 1 or 0
 */
int _isupper(int c)
{
    if (c >='A' && c <= 'Z')
    {
            return (1);
    }
    else
            return (0);
}
