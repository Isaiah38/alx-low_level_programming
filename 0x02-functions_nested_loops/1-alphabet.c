#include "main.h"
 /**
 * main - prints the alphabet, in lowercase
 * Return: Always (0) when successful
 */
void print_alphabet(void)
{
	char i;

	i = 'a';
	for (; i != 'z'; i++){
		_putchar(i);
		_putchar('\n');
	}
}
