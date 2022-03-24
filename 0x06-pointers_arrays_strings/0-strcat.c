#include "main.h"

/**
 * _strcat - concatenate two string
 * @dest: destination argument
 * @src: source argument
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	
	for(i = 0; src[i] != '\0'; i++)
		for(j = 0; dest[j] != '\0'; j++, i++)
		{
			dest[i] = src[j];
		}
	dest[i] = '\0';
	return (dest);
}
