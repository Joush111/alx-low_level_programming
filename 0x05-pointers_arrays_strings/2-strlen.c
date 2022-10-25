#include "main.h"
/**
 * _strien - return the length of a string
 * @s: char to check
 * Description: this will return the lenght of a string
 * Return: 0 is success
 */

void _strien(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
