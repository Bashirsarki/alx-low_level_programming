#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry Point
 * @n: single int input
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		if (n == 98)
			printf("%d", n);
		else
			printf("%d, ", n);
	}
}
