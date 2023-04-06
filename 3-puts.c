#include "main.h"
/**
 * _puts - prints the string and a new line
 *
 * Return: always 0
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');

}
