
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char moreChar[] = "_putchar\n";
	int i = 0;

	while (moreChar[i])
	{
		_putchar(moreChar[i]);
		i++;
	}
	return (0);
}
