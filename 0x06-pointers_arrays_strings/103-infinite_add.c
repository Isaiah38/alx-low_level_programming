#include "main.h"

/**
 * infinite_add - add two numbers together
 * @n1: number to be added
 * @n2: number to be added
 * @r: the result
 * @ size_r; size of the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j;

	for (i = 0; n1[i] != '\0'; i++)
	{
		for (j = 0; n2[j] != '\0'; j++)
		{
			n1[i] = n2[j];
			i++;
			j++;
		}
		n1[i] = '\0';
		r[] = n1;
	}
	size_r = sizeof(r);
}

