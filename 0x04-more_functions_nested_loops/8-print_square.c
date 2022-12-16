#include "main.h"
/**
 * print_square - Entry point
 * @size: single word input
 */
void print_square(int size)
{
	int count, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 1 ; count <= size ; count++)
		{
			_putchar('#');
			for (z = 2 ; z < size; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
