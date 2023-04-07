#include <stdio.h>
/**
 * main - learning pointers
 *
 * Return: always 0
 */
int main(void)
{
	int num = 42;/*Declare an integer initialize it to 42*/
	int *ptr = &num;/*Declare a pointer variable and set it to a point to the address*/

	printf("The value of num is %d\n", num);/*output: the value of num is 42*/
	printf("The value of ptr is %p\n", ptr);/*output: the value of ptr is the memory address of num*/
	printf("The value of *ptr is %d\n", *ptr);/*output: the value of *ptr is the value of num*/

	*ptr = 98;/*set the value of num to 98 by dereferencing the pointer variable*/

	printf("The value of num is now %d\n", num);
	return (0);

}