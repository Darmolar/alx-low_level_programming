#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - A function to prints half of a string
 * @s: A String  variable
 * Return : void
 */

void puts_half(char *s)
{
	int i, n;
	int sLength = strlen(s);

	if (sLength % 2 != 0)
	{
		n = (sLength - 1) / 2;
		for (i = n; i < sLength - 1; i++)
		{
			putchar(s[i + 1]);
		}
	}
	else
	{
		for (i = sLength / 2; i <= sLength; i++)
		{
			putchar(s[i]);
		}
	}
	putchar('\n');
}
