#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j;
	size_r = sizeof(*r);

	for (i = 0; n1[i] != '\0'; i++)
	{
		for (j = 0; n2[j] != '\0'; j++)
		{
			n1[i] = n2[j];
			i++;
			j++;
		}
		n1[i] = '\0';
	}

	if (*r >= 0)
		return (0);
}

