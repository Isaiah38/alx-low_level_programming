#include "main.h"
 /**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: Always (0) when successful
 **/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)	
	{
		_putchar(i);
	}
	_putchar('\n');
}
