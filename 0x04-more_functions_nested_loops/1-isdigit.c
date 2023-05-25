#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @x: The number to checked
 * Return: 1 for true character value, 0 for any other 
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
