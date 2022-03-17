#include "main.h"
#include <unistd.h>
/**
 * print_numbers - print numbers 
 *
 * Return:  Always (0) when successful
 */
void print_numbers(void)
{
	for (c = 0; c <= 9; c++)
	{
		_putcar(c);
	}
	_putchar('\n');
