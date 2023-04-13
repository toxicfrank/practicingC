#include <stdio.h>
/**
 * add - adding the ellements in the array
 * @a: parameter function
 * @len: parameter fuction
 * Return: Sum
 */
int add(int a[], int len)
{
	int sum = 0, i;

	for (i = 0; i <= len; i++)
	{
		sum += a[i];
	}
	return (sum);
}
/**
 * main - check the code
 * Return: always 0
 */
int main(void)
{
	int a[] = {1, 2, 4, 5, 6};
	int len = sizeof(a) / sizeof(a[0]);

	printf("%d\n", add(a, len));

	return (0);
}
