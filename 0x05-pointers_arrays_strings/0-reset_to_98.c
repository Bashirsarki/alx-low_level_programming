#include "main.h"
/**
 * reset_to_98 - Entry Point
 * @n: single letter input
 */
void reset_to_98(int *n)
{
	int *ptr = &*n;
	*ptr = 98;
}
