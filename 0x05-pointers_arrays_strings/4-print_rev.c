#include "main.h";

/**
 * print reverse string
 * @s: string
 * Return: new string
 *
 */

void print_rev(char *s)
{
	int count = 0;
	int out;
	while(*s != '\0')
	{
		count++;
		s++;
	}

	s--;
	_putchar('\n');
}

