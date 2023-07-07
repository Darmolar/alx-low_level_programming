#include <stdio.h>
/**
 * main - A program to print out all alphabets
 * Return: 0 (success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
