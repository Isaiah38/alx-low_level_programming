#include "main.h"

/**
 * more_numbers - print 10 times the number from 0 to 14
 * follow by a new line
 * Return: 0
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
