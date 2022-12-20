#include <stdio.h>
/**
 * rev_string - rewvers string
 * @s: string
 * Return: void
 *
 */

void rev_string(char *s)
{
	int i = 0, tail, k;
	char c;

	while (s[i] != '\0')
		i++;

	i--;
	tail = i;
	k = i / 2;
	i = 0;

	while (i <= k)
	{
		c = s[i];
		s[i] = s[tail];
		s[tail] = c;
		i++;
		tail--;
	}
}
