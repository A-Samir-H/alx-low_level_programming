#include <stdio.h>
#include <unistd.h>
/*
*main - main function in the task
*Return: return 1
*/
int main(void)
{
	/*Using write function to print to stderr*/
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);/*59 is the length of the message*/
	return (1);
}
