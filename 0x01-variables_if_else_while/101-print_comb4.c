#include <stdio.h>
/**
* main - prints all possible different combinations of three digits
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int a;
	int b;

	for (n = 48; n < 57; n++)
	{
		for (a = n + 1; a <= 57; a++)
		{
			for (b = a + 1; b <= 57; b++)
			{
				if ((a != n) != b)
				{
					putchar(n);
					putchar(a);
					putchar(b);
				if (n == 56 && a == 57)
					continue;
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
		putchar('\n');
		return (0);
}
