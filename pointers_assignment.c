#include <stdio.h>
/**
 * main - pointers assignment
 * Return: alyways 0
 */
int main(void)
{
	int i = 10;
	int *p, *q;
	p = &i;
	q = p;

	printf("%d %d \n", *p, *q);
	/*Note that *q = *p */
	
	/*another example*/
	int j = 1;
	int *l = &j;
	int *k;
	k = l;
	*k = 5;

	printf("%d\n", *l);

	return (0);
}
