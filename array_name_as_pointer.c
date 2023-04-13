 #include <stdio.h>
 /**
  * main - using array name as pointer
  * Return: always 0
  */
 int main(void)
 {
	/*I learn that *(a + i) = a[i] */
	int a[5];
	*a = 10;

	printf("%d\n", a[0]);

	*(a + 1) = 20;

	printf("%d\n", a[1]);

/*New programme for calculating sum of arrays in a
simple way*/
	int b[] = {23, 4, 56, 5, 6, 65, 9};
	int sum = 0, *k;

	for (k = b; k < b + 6; k++)
	{
		sum += *k;
	}
	printf("sum=%d\n", sum);

	return (0);
 }
