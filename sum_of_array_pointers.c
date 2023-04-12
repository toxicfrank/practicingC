#include <stdio.h>
/**
 * main - getting the sum of arrays
 * Return: always 0
 */
int main(void)
{
	int a[] = {34, 5, 6, 78, 9, 20};
	int *p = &a[0];
	int sum = 0;

	for (p = &a[0]; p <=  &a[6]; p++)
	{
		sum += *p;
	}

	printf("sum %d", sum);

	return (0);
}
