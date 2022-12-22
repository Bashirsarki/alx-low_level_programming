#include "main.h"
/**
 * *_strcat - Entry for strings to be concatenated
 * @dest: where the concatenated sting will be stored
 * @src: string source
 * Return: return the string to the function
 */
char *_strcat(char *dest, char *src)
{
	char *str = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (str);
}
