#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: is what is being checked
 * Return: 1, if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c == 0 && c <=9)
		return (0);
	else
		return (1);
}
