#include <stdio.h>
/**
* main - prints all possible combinations of single-digit numbers
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int a;

	for (n = 48; n <= 57; n++)
	{
		for (a = n + 1; a <= 57; a++)
		{
			if (a != n)
			{
				putchar(n);
				putchar(a);
				if (n == 56 && a == 57)
				continue;
				putchar(',');
				putchar(' ');
			}
			}
	}
	putchar('\n');
			return (0);
}
