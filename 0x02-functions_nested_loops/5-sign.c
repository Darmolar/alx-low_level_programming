#include "main.h"
#include <ctype.h>

/**
 * print_sign  -  A program to print sign based on condition
 *@n: A chracter value
 *
 * Return: 0
*/
int print_sign(int n)
{
	if (n>0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (0);
	}
}
