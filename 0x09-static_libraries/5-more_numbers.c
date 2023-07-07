#include "main.h"

/**
 * more_numbers - print numbers 1 - 14 10 times
 * Return:always 0
 */
void more_numbers(void)
{
	char i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i / 10 > 0)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
