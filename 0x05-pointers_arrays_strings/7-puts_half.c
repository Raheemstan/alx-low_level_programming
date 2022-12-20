#include "main.h"

/**
 * puts_half - function that takes a pointer to an int as parameter and
 * @str: string of xters
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
		i = i / 2;
	else
		i = (i + 1) / 2;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

