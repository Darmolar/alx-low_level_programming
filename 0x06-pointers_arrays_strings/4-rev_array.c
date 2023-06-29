#include "main.h"

/**
 * reverse_array - A functionn to print array in reverse
 * @a: An array variable
 * @n: AN integer value
 * Return : Void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
