#include "main.h"
#include <string.h>
/**
 * print_rev - prints the string in reverse
 *
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int c;
	c = 0;

	while(s[c] != 0)
	{/*The c stores a letter in each array*/
		c++; /*The outcome is a sentence*/
	}

	for (c = c - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}