#include "main.h"
#include <stdio>

/**
 * _isupper: functions that check for uppercase characters
 * @c: parameter
 * Return: value Return
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
