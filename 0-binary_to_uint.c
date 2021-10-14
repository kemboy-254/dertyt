#include "main.h"
#include <stdio.h>
#include <math.h>
#include <string.h>

/**
 * binary_to_unit- Converts binary to number
 * @b: A string pointing to a string contains
 *	1s and 0s
 * Return: converted number
 *	0 if b is null
 *	0 if not 1 or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len;

    	if (b == NULL)
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (num);
}
