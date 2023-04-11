#include <stdio.h>
/**
 * main - allocating a pointer to an array
 * Return: always 0
 */
int main(void)
{
	int a[] = {1, 2, 3, 4, 5};
	int *p;

	p = &a[0];

	printf("the number is %d\n", *p);

	p = p + 2;

	printf("the new number is %d\n", *p);

	return (0);
}
