#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* 
 * Function: main
 * -------------------
 * Entry point of the program.
 * Initializes a random number generator and prints whether a randomly generated number is positive, negative, or zero.
 *
 * Returns: Always returns 0 to indicate successful execution.
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
		printf("%d is Positive\n", n); // Print message if n is positive
	else if(n < 0)
		printf("%d is negative\n", n); // Print message if n is negative
	else
		printf("%d is Zero\n", n); // Print message if n is zero
	return (0);
}
