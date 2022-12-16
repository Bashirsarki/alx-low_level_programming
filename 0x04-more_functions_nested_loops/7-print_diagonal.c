#include "main.h"
/**
 * print_diagonal- Entry Point
 * @n: single letter input
 */
void print_diagonal(int n)
{
	int count, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 1; count <= n ; count++)
		{
			for (sp = 1; sp < count ; count++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
