#include <stdio.h>
/**
 * main - A program to print out all alphabets
 * Return: 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
