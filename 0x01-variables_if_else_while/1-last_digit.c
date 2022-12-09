#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - Variable n to run different value every time the program is run
 *
 * Return: 0
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
