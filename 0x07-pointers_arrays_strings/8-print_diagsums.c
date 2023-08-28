#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - description
 * @a: 2d array of int type
 * @size: of array (square)
*/

void print_diagsums(int *a, int size)
{
	int t, s1 = 0, s2 = 0;

	for (t = 0, t < size; t++)
	{
		s1 += a[t];
		s2 += a[size - t 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
