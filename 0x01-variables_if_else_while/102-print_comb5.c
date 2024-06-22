#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Declare variables for the two-digit numbers */
	int num1, num2;

	/* Loop through the first number from 0 to 99 */
	for (num1 = 0; num1 <= 99; num1++)
	{
		/* Loop through the second number from num1+1 to 99 to avoid duplicates */
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			/* Print the tens digit of num1 */
			putchar((num1 / 10) + '0');
			/* Print the units digit of num1 */
			putchar((num1 % 10) + '0');
			/* Print a space between the two numbers */
			putchar(' ');
			/* Print the tens digit of num2 */
			putchar((num2 / 10) + '0');
			/* Print the units digit of num2 */
			putchar((num2 % 10) + '0');

			/* Check if this is not the last combination */
			if (num1 != 98 || num2 != 99)
			{
				/* Print a comma */
				putchar(',');
				/* Print a space */
				putchar(' ');
			}
		}
	}
	/* Print a newline at the end */
	putchar('\n');
	return (0);
}
