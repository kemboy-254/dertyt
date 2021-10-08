#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to be passed as argument.
 *
 * Return: 1 if character is alphabetic, 0 if not.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
