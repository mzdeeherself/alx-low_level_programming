#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Prints the last digit of a random number
* and whether it is grater than 5, less than 6, or 0
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (n == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
