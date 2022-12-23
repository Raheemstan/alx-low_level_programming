#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenate strings
 *
 * @dest: begin new string
 * @src: end new string
 *
 * Return: new string
 *
 */

char *_strcat(char *dest, char *src)
{
	int i=0;
	int j=0;

	while (dest[i] && dest[i] !='\0')
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	
	return (dest);
}

