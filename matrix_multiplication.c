#include <stdio.h>
#define MAX 50
/**
 * main - this programme will be used to multiply matrixes
 *
 * Return: always 0
 */
int main(void)
{
	int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
	int sum = 0;
	int i, j, k;
	int arows, acolumns, brows, bcolumns;

	/*Part 1*/
	/*Entering the number of raws and columns in  matrix a*/

	printf("Enter the number of rows and columns in matrix a: \n");

	scanf("%d %d", &arows, &acolumns);

	/*Enter the elements of the array in the matrix a*/

	printf("Enter the elements in the matrix a: \n");

	for (i = 0; i < arows; i++)
	{
		for (j = 0; j < acolumns; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");

	/*Enter the number of rows and columns in matrix b*/

	printf("Enter the number of rows and columns in matrix b: \n");

	scanf("%d %d", &brows, &bcolumns);

	/*Condtion set to ensure that the acolumns and brows are equal*/

	if (acolumns != brows)
	{
		printf("The matrix multiplication of a and b cannot be performed.\n");
	}

	else
	{
		printf("Enter the elements of the matrix b: \n");

		for (i = 0; i < brows; i++)
		{
			for (j = 0; j < bcolumns; j++)
			{
				scanf("%d", &b[i][j]);
			}
		}
	}
	printf("\n");

	/*Multiplication process*/

	for (i = 0; i < acolumns; i++)
	{
		for (j = 0; j < brows; j++)
		{
			for (k = 0; k < brows; k++)
			{
				sum += a[i][k] * b[k][j];
			}
			product[i][j] = sum;
			sum = 0;
		}
	}

	/*the result*/
	/*The answer should have the same number of arows and the same number of columns*/

	printf("The answer is: \n");

	for (i = 0; i < arows; i++)
	{
		for (j = 0; j < bcolumns; j++)
		{
			printf("%d", product[i][j]);
		}
		printf("\n");
	}

	return (0);
}
