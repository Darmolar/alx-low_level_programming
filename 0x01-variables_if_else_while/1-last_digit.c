#include <stdlib.h>
#include <time.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, lastDigit, numLength;
	char message;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	numLength = strlen(n);
	lastDigit = atoi(&n[numLength - 1]);
	if(lastDigit > 5)
	{
		message = "and is greater than 5";
	}
	if(lastDigit == 0)
	{
		message = "and is 0";
	}
	else if(lastDigit < 6 && lastDigit != 0)
	{
		message = "and is less than 6 and not 0";
	}
	
	printf("Last digit of %d is %d %s", n, lastDigit, message);
	return (0);
}
