#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char charType;
	int integerType;
	long int longIntType;
	long long int longlongIntType;
	float floatType;

	printf("Size of a char: %ld byte(s)\n",sizeof(charType));
	printf("Size of an int: %ld byte(s)\n",sizeof(integerType));
	printf("Size of a long int: %d byte(s)\n",sizeof(longIntType));
	printf("Size of a long long int: %d byte(s)\n",sizeof(longlongIntType));
	printf("Size of a float: %d byte(s)\n",sizeof(floatType));

	return (0);
}
