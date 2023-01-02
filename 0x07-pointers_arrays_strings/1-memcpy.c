#include "main.h"
/**
 * _memcpy - Entry point
 * @dest: Destination to be copied to
 * @src: Source to be copied from
 * @n: Number of memory location to be copied
 * Return: return pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
		*dest++ = *src++;
	return (ptr);
}
