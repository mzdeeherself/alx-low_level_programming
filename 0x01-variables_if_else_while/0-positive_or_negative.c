#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Determines if a number is positve or negative or 0
* Return: Always 0 (Success)
*/
int main(void)
{
int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n < 0)
	{
		printf("is negative\n");
	}
	else
	{
		printf("%d is Zero\n", n);
	}
	return (0);
}
