#include "main.h"
/**
 * _strncpy - Entry point of strings
 * @dest: destination
 * @src: source
 * @n: integer input
 * Return: return dest to function
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *i = dest;
	int j;

	for (j = 0; j < n && *src != '\0'; j++)
	{
		*dest++ = *src++;
	}
	while (j < n)
	{
		*dest++ = '\0';
		j++;
	}
		return (i);
}
