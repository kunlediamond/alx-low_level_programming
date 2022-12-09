#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function to generate random numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	b = n % 10;
	if (b > 5)
	{
		printf("%d and is greater than 5\n", b);
	}
	else if ((b < 6) && (b < 0))
	{
		printf("%d and is less than 6 and not 0\n", b);
	}
	else
	{
		printf("%d and is 0\n", b);
	}
	return (0);
}
