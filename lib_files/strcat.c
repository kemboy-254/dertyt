#include "main.h"
/**
 * _strcat -  concatenates two strings.
 * @src: array with the string source
 * @dest: pointer where the text is append
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*(dest + i))
	{
		i++;
	}
	while (*(src))
	{
		*(dest + i) = *(src);
		i++;
		src++;
	}
	return (dest);
}
