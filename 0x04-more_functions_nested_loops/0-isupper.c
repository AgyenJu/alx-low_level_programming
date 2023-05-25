#include "main.h"

/**
 * _isupper: check for upper letter
 * @y: the parameter
 * Return: 1 for upper case 0r o for any other
 */

int _isupper(int y)
{
	if (y >= 65 && y <= 90)
	{
		return (1);
	}
	return (0);
}
