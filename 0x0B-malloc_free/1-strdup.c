#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *_strdup - function  that returns a pointer
* to a newly allocated space in memory
* @str: Parameter with the string
* Return: Return the new array
*/

char *_strdup(char *str)
{
	char *dup;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++);

	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		dup[i] = str[i];
	return (dup);
}
