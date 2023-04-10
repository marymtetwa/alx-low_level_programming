#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * a function that converts a binary number to an unsigned int
 * @b: the string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal_value = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (b[i] - '0');
	}

	return (decimal_value);
}