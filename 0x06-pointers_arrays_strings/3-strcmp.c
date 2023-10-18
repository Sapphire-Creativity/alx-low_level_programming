#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: Pointer to the first string to be compared
 * @s2: pointer to the second string to be compared
 * Return: If str1 , str1, the negative difference
 * If str1 == str2, 0.
 * If str1 > str2, the postive difference of the first unmatched
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
