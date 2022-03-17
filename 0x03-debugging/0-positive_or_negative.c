#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
*main - Print a random number
*
*Return: program runs succefully
*/
void positive_or_negative(void);
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
}

