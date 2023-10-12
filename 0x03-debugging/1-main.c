#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop Incoming :(\n");

	i = 0;

	/*
	 * Loop would have cause an Infinite loop
	 * while (i < 10)
	 * {
	 *	putchar(i);
	 * }
	 */

	printf("Infinite loop avoided! \\0/\n");

	return (0);
}
