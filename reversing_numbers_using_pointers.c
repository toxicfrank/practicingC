#include <stdio.h>
#define N 5
/**
 * main - reversing a series of numbers
 * Return: always 0
 */
int main(void)
{
	int a[N];
	int *p;

	printf("Enter %d elements in the array.\n", N);
	for (p = a; p <= a + N - 1; p++)
	{
		scanf("%d", p);
	}
	printf("The reverse is:\n");
	for (p = a + N - 1; p >= a; p--)
	{
		printf("%d", *p);
	}
	printf("\n");

	return (0);
}
