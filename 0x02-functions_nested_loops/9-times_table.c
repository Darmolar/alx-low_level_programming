#include <stdio.h>
#include "main.h"

/**
 * times_table - A program to print out times table
 *Return: 0
*/
void times_table(void)
{
	int i;
	int j, z;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			z = i * j;
			printf("%d,  ", z);
		}
		_putchar('\n');
	}
}
