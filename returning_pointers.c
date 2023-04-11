#include <stdio.h>
/**
 * *findmidian - finds the mid point
 * @a: parameter function
 * @n: parameter function
 * Return: midian
 */
int *findmidian(int a[], int n)
{
	return (&a[n / 2]);
}
/**
 * main - check the code
 * Return: always 0
 */
int main(void)
{
	int a[] = {1, 2, 3, 5, 32, 7, 9, 45, 5};
	int n = sizeof(a) / sizeof(a[0]);
	int *mid = findmidian(a, n);

	printf("The midian is %d\n", *mid);

	return (0);
}
