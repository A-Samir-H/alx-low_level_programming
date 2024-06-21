#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*Initializes a random number generator and prints whether a randomly generated number is positive, negative, or zero.*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
		printf("The Number %d is Positive\n", n);
	else if(n < 0)
		printf("The Number %d is negative\n", n);
	else
		printf("The Number is Zero\n");
	return (0);
}
