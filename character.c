#include <stdio.h>
/**
 * main - learing pointers still
 *
 * Return: always 0
 */
int main(void)
{
	char ch = 'A';
	char *ptr = &ch;

	printf("The value of ch is %c\n", ch);/*output:
	 The value of ch is A*/
	printf("The value of ptr is %p\n", ptr);/*output:
	 The value of ptr is the memory address of ch*/
	printf("The value of *ptr is is %c\n", *ptr);/*output:
	 The value of *ptr is the value of ch*/
	printf("The ASCII value of A is %d\n", *ptr);

	*ptr = 'B';
	printf("The value of ch is now %c\n", ch);/*output: 
	The value of ch is now B*/

	return (0);
}