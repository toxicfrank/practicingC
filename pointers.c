#include <stdio.h>
/**
 * main - changing the variable
 *
 * Return: always 0
 */
int main(void)
{
	int x = 6;
	int *ptr;
	ptr = &x;

	printf("%d\n", x);

/*Changing the variable x*/

	*ptr = 7;

	printf("%d\n", *ptr);

	printf("%p\n", &ptr);

	printf("%d\n", x);

	return (0);
}
