#include <stdio.h>
/**
 * main - just learnt that constant arrays are arrays that cannot be changed
 *
 * Return: alaways 0
 */
int main(void)
{
	const int a[4] = {12, 123, 1, 4};

	printf("%d", a[1]);

	/**
	 * a[2] = 14;
	 *
	 * the code above wont work because the array mentioned above
	 * has already been assigned a constant integer
	 */
	return (0);
}