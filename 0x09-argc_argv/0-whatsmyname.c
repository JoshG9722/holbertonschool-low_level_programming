#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - prints program name
 * @argc: argument count
 * @argv: array of strings
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}