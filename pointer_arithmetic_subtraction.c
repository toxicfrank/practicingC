#include <stdio.h>
/**
 * main - allocating the pointer
 * Return: always 0
 */
int main(void)
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int *p;

	p = &a[5];

	printf("the number is %d\n", *p);

	p = p - 2;

	printf("the new number is %d\n", *p);

	return (0);
}
