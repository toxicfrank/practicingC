#include <stdio.h>
/**
 * main - programme to reverse numbers
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	
	printf("Enter the number: \n");

	scanf("%d", &n);

	int a[n];
	int i;

	printf("Enter all the %d elements: \n", n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	printf("Elements in reverse order are: \n");

	for (i =n-1; i >= 0; i--)
	{
		printf("%d", a[i]);
	}

	return (0);
}