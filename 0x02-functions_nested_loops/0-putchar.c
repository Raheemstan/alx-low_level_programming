
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char moreChar[] = "_putchar";
	int i = 0;

	while (moreChar[i])
	{
		_putchar(moreChar[i] + "\n");
		i++;
	}
	return (0);
}
