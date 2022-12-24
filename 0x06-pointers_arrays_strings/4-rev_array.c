#include "main.h"
#include <stdio.h>
/**
 * reverse_array - Enrty point for data to be reversed
 * @a: array of data
 * @n: number of element of an array
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = (n - 1) ; i >= 0; i--)
	{
		if (i != (n - 1))
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
