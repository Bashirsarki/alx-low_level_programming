#include "main.h"
/**
 * _puts_recursion - Entry point for string to be printed
 * @s: String input
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
