#include <stdio.h>
/**
 * main - this is a programme to display the array elements
 *
 * Return: always 0
 */
int main(void)
{
	int a[10], i;

	for (i = 0; i < 10; i++)
	{
		printf("Enter the input for index %d: \n", i);
		scanf("%d", &a[i]);
	}

	printf("Array elements are as follows: \n");

	for (i = 0; i < 10; i++)
	{
		printf("%d", *(a+i));
	}
	return (0);
}
