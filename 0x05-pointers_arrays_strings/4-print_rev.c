#include "main.h"

/**
 * print_rev - function that takes a pointer to an int as parameter and
 * @s: string of xters
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
