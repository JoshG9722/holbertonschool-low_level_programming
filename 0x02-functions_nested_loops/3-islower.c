#include "holberton.h"
/**
 * islower - checks if letter is lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

    if (c >= 'a' && c <= 'z')
    {
        return (1);
    }
    else
    {
        return(0);
    }
}
