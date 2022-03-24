#include "main.h"

/**
 * infinite_add - add two numbers together
 * @n1: number to be added
 * @n2: number to be added
 * @r: the result
 * @ size_r; size of the result
 * Return: 0 when positive
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	*r = n1 + n2;
	size_r = sizeof(r);

	if (*r >= 0)
		return (0);

}

