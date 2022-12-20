#include "main.h"
/**
 * swap_int - Entry Point
 * @a: single letter input
 * @b: single letter input
 */
void swap_int(int *a, int *b)
{
	int *i, *j;

	i = &*a;
	j = &*b;
	*i = *j;
	*j = *i + 56;
}
