#include "holberton.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 * @n: bytes in s2 to be concatenated with s1.
 *
 * Return: pointer to the new string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = *p_tmp = NULL;
	unsigned int len1, len2;

	int len_of_str(char *str);
	len1 = len_of_str(s1);
	len2 = len_of_str(s2);

	if (len2 > n)
		len2 = n;

	p_tmp = p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p_tmp == NULL)
		return (NULL);

	while (*s1)
		*p_tmp++ = *s1++;

	while (len2--)
		*p_tmp++ = *s2++;

	*p_tmp = '\0';

	return (p);
}

/**
 * len_of_str - returns string length
 * @str: string whose length is to be returned
 * Return: string length.
 */
int len_of_str(char *str)
{
	int len = 0;

	if (!str)
		str = "";

	while (*str++)
		len++;
	return (len);
}
