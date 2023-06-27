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
		for (i = sLength / 2; i <= n; i++)
		{
			putchar(s[i]);
		}
	}
	else
	{
		for (i = sLength / 2; i <= sLength; i++)
		{
			putchar(s[i]);
		}
	}
}
