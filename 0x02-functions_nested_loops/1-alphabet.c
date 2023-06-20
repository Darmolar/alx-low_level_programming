#include "main.h"

/**
 *main - A program to print out _putchat
 *Return: 0
*/
void print_alphabet(void)
{
	int i;

	for(i = 'a'; i < 'z'; i++)
	{
		_putchar(i + 'a');
	}
	_putchar('\n');
	return (0);
}
