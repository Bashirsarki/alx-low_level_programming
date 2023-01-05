#include "main.h"
/**
 * _puts_recursion - Entry point for string to be printed
 * @s: String input
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
}
