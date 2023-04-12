#include <stdio.h>
/**
 * main - incrementing and decrementing of a pointer
 * Return: always 0
 */
int main(void)
{
	int a[] = {1, 2, 4, 5, 7, 8, 9};
	int *p = &a[0];

	printf("%d\n", *(p++));/*output: 1*/
	printf("%d\n", *p);/*output: 2*/
	printf("%d\n", *(++p));/*output: 4*/
	printf("%d\n", *(p--));/*output: 4*/
	printf("%d\n", *p);/*output: 2*/
	printf("%d\n", *(--p));/*output: 1*/

	return (0);
}
