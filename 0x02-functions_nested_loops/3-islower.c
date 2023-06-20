#include "main.h"
#include <ctype.h>

/**
 *_islower - A program to print outlower case
 *Return: 0
*/
int _islower(int c)
{
	if(islower(c))
	{
		return 1;
	}else{
		return 0;
	}
}
