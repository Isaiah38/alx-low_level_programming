#include "main.h"
#include <unistd.h>
/**
 * print_numbers - print numbers 
 *@c: the value being checked
 * Return:  Always (0) when successful
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		_putchar(c);
	_putchar('\n');
}
