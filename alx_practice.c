#include <stdio.h>
int main(void)
{
	int *ptr ;
	int i = 3;

	ptr = &i;

	printf("%d\n", *ptr);
	return (0);
}
