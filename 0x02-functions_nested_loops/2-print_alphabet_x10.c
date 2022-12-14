#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * return - Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int count;
	int n;

	for (count = 0; count <= 9; count++)
	{
		for (n = 'a'; n <= 'z'; n++)
		_putchar(n);
		_putchar('\n');
	}
}
