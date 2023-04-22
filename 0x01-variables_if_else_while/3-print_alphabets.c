#include <stdio.h>
/**
* main - Prints alphabets in uppercase
* Return: Always 0 (Success)
*/
int main(void)
{
	int n = 97;
	int a  = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (a <= 90)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

