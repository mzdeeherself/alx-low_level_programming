#include "main.h"
/**
*_islower - checks for lowercase character
*@c: The character to print
*Return: 1 for letters and 0 for the rest (Success)
*Description: c for variable
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
