#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in resverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[counter];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
