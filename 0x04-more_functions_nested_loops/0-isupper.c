#include "main.h"
#include <stdio>

/**
 * _isupper: functions that check for uppercase characters
 *
 * @c: parameter
 * Return: value Return
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
