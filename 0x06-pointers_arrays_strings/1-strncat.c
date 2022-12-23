#include "main.h"
#include <string.h>
/**
 * _strncat - Entry for conct string
 * @dest: string destination
 * @src: string source
 * @n: space to be cocatented
 * Return: return to function
 */
char *_strncat(char *dest, char *src, int n)
{
	char *i = dest;
	int j;

	while (*dest != '\0')
		dest++;
	for (j = 0; j < n && *src != '\0'; j++)
		*dest++ = *src++;
	*dest++ = '\0';
	return (i);
}
