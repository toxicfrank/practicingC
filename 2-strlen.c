#include "main.h"
#include <string.h>
/**
 * _strlen - length of string
 *
 * Return: always 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length ++;
		s++;
	}
	return (length);
}
