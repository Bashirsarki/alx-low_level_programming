#include "main.h"
/* print_last_digit - Entry point 
 * @ab: single integer input
 * Return: 0 or 1 (Success)
 */
int print_last_digit(int nld)
{
	int pld;

		pld = (nld % 10);

			if (pld < 0)
					{
								pld = (-1 * pld);
									}

				_putchar(pld + '0');
					return (pld);
}
