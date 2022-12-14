#include "main.h"
/**
 * _isalpha - Entry point
 * Return: 0 or 1 (success)
 * @c: single letter input
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
