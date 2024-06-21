#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*Declare variable letter with value a*/
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter); /*print the current letter*/
		letter ++; /*Increment letter by 1 to go to the next letter in ASCII*/
	}

	/*outputs a new line character, causing the next output to start on a new line.*/
	putchar('\n');

	return (0);
}
