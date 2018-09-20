#include "holberton.h"
/**
 * _isdigit - entry point
 * @c: checks if c is a digit 
 * Return: Either 1 or 0
 */
int _isdigit(int c)
{
        if (c >= '0' && c <= '9')
        {
                return (1);
        }
        else
                return (0);
}
