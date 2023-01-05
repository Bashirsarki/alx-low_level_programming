#include "main.h"
/**
 * _puts_recursion - Entry point for string to be printed
 * @s: String input
 */
void _puts_recursion(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
	_putchar(*p);
	p++;
	}
	if (*p == '\0')
		_putchar('\n');
}
