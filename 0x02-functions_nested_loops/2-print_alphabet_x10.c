#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int n;
	int x;

	for (n = 1; n <= 10; n++)
	{
		for (x = 97; x <= 122; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}

