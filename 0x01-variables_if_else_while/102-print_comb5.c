#include <stdio.h>
/**
 * main - A program to print out all alphabets
 * Return: 0 (success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar((i / 10) + '0');
            		putchar((i % 10) + '0');
            		putchar(' ');
            		putchar((j / 10) + '0');
          	 	 putchar((j % 10) + '0');

            		if (i != 99 || j != 99) {
                		putchar(',');
                		putchar(' ');
            		}
		}
	}
	putchar('\n');
	return (0);
}
