#include "main.h"

/**
 * _isupper - check for upper case letter
 * @c: parameter
 * Return: Return values
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
