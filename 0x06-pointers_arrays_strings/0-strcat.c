#include "main.h"

/**
 * _strcat - concatenation of two or strings
 *
 * @dest: the end of the new string
 * @src: the begining of the new string
 *
 * Return: new full string
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		dest[j] = temp[i];
		i++;
		j++;
	}

	i = 0;

	while (src != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}

	dest[j] = '\0';

	return dest;
}

