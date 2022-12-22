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
	char *temp;
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		temp[j] = dest[i];
		i++;
		j++;
	}

	i = 0;

	while (src != '\0')
	{
		temp[j] = src[i];
		i++;
		j++;
	}

	temp[j] = '\0';

	return temp;
}

