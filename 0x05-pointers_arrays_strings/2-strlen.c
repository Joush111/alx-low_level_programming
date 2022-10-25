#include "main.h"

/**
 * _strien - returns the length of string s
 * @s: string to find length
 * Return: length of string
 */

void _strien(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}
