#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *@a,b: parameters to be swap
 */
void swap_int(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
}
