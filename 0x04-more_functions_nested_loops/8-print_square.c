#include "main.h"
#include <stdio.h>

/**
 * print_square - print # number of times
 * @n: an integer value
 * Return: Always 0.
 */
void print_square(int size)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
