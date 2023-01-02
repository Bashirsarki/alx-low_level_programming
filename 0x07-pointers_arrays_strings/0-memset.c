#include "main.h"
/**
 * _memset - Entry point for memory set
 * @s: Array in which pointer will be returned to
 * @b: character input
 * @n: integer input that holds the number of memory to be replaced
 * Return: Return a pointer to the first character of the array
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
