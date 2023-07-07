#include "main.h"
#include <stdio.h>

/**
 * print_square - print # number of times
 * @size: an integer value
 * Return: Always 0.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
