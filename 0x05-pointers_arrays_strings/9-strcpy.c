#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte to the buffer pointed to by dest.
 *
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);

	return (dest);
}
