#include <stdio.h>

/**
 * swap_int - swap the value of two differnt variables
 * @a: first int variable
 * @b: second int variable
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int *temp;
	temp = &a;

	a = &b;
	b = &temp;
}

