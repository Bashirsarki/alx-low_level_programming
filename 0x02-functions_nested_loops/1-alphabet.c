#include "main.h"
/**
 * print_alphabet - Entry point
 * return - always 0 (Success)
 */
void print_alphabet(void)
{
	int n = 'a';

	while (n <= 'z')
	{
	_putchar(n);
	n++;
	}
	_putchar('\n');
}
