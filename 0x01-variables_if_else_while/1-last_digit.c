#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Variables declaration */
	int n;
	int last_digit;

	/* Initialization */
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Calculate last digit */
	last_digit = n % 10;

	/* Output the result */
	printf("Last digit of %d is %d ", n, last_digit);

	/* Check conditions */
	if (last_digit > 5)
		printf("and is greater than 5\n");
	else if (last_digit == 0)
		printf("and is 0\n");
	else
		printf("and is less than 6 and not 0\n");

	return (0);
}

