#include "main.h"
#include <string.h>
/**
 * rev_string - prints the reverse of a string
 *
 * Return: always 0
 */
void rev_string(char *s)
{
	char rev = s[0];
	int r = 0;
	int i;

	while(s[r] != '\0')
	{
		r++;
	}
	for(i = 0; i < r ; i++)
	{
		r--;
		rev = s[i];
		s[i] = s[r];
		s[r] = rev;
	}
}
