#include<stdio.h>
#include "main.h"

/**
 * puts2 - print other xters with the first
 * @str: string text
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
