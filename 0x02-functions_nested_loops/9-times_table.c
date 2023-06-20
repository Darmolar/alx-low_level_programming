#include "main.h"

/**
 * times_table - A program to print out times table
 *Return: 0
*/
void times_table(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar((i*j));
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
