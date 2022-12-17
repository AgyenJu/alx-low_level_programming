#include "main.h"
#include <stdio>

/**
 * _isdigit: check for digits from 0 through to 9
 *
 * @c: input
 * Return: 1 if c is digit, otherwise 0
 */

int isdigit(c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
