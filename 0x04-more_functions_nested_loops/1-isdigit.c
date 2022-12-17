#include "main.h"
#include <stdio>

/**
 * isdigit: check for digits ( 0 through 9)
 *
 * Desc: checks for digits
 * @c: input
 *
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
