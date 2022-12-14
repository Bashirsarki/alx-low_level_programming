#include "main.h"
/**
 * print_sign - Entry point
 * Return: 0 , 1 0r -1 (Success)
 *@n: single integer input
 */
int print_sign(int n)
{
	int ps = '+';
	int ng = '-';
	int zr = '0';

	if (n > 0)
	{
		_putchar(ps);
		return (1);
	} else if (n == 0)
	{
		_putchar(zr);
		return (0);

	} else
	{
		_putchar(ng);
		return (-1);

	}
}
