#include "main.h"
#include <string.h>
#include <stdio.h>

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
	
	int i = 0;
	int j = strlen(dest);

	for (i = 0; dest[i] != '\0'; i++)
		dest[i + j] = src[i];

	dest[i + j] = '\0';
	return dest;
}

