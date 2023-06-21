#include "main.h"

/**
  * print_times_table - Prints the n times table, starting with 0
  *
  * Return: empty output
  */
void print_times_table(int n)
{
	int x, y, z, u, d;
	
	if(n > 15 || n < 0)
	{
	
	}
	else
	{

		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;

				if (z > 9)
				{
					u = z % 10;
					d = (z - u) / 10;

					_putchar(44);
					_putchar(32);
					_putchar(d + '0');
					_putchar(u + '0');
				}
				else
				{
					if (y != 0)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
					}

					_putchar(z + '0');
				}
			}
			_putchar('\n');
		}
	}
}
