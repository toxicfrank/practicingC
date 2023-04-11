#include <stdio.h>
/**
 * minMax - to check the least and largest number
 * main - to find out the minimum and max values
 * Return: always 0
 */
void minMax(int arr[], int len, int *min, int *max)
{
	*min = *max = arr[0];
	int i;

	for (i = 1; i < len; i++)
	{
		if (arr[i] < *min)
		{
			*min = arr[i];
		}
		if (arr[i] > *max)
		{
			*max = arr[i];
		}
	}
}
int main(void)
{
	int a[] = {12, 132, 4, 214, 23, 42, 1, 2, 0, 12, 140, 153};
	int min, max;
	int len = sizeof(a) / sizeof (a[0]);

	minMax(a, len, &min, &max;
	printf("least is %d ,largest is %d\n", min, max);

	return (0);
}
