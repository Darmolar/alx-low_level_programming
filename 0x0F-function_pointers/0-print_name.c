#include <stdio.h>
#include "function_pointers.h"

/**
 *  print_name - a function to print name base on value selected
 * @name: a pointer varibale
 * @f: a pointer function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
