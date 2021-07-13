#include "holberton.h"
#include <stdlib.h>
/**
 * str_l - returns string length
 * @s: string
 * Return: string length
 */
int str_l(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;
	return (x);
}
/**
 * argstostr - concats arguments of program
 * @ac: takes arguments
 * @av: array of arguments
 * Return: pointer to new string
 **/
char *argstostr(int ac, char **av)
{
	char *str;
	int y, x, j;
	int all = 0;


	if (ac == 0 || av == NULL)
		return (NULL);
	for (y = 0; y < ac; y++)
		all += str_l(av[y]) + 1;
	str = malloc(sizeof(char) * all + 1);
	if (str == NULL)
		return (NULL);
	for (y = 0, j = 0; y < ac; y++)
	{
		for (x = 0; av[y][x] != '\0'; x++, j++)
			str[j] = av[y][x];
		str[j] = '\n';
		j++;
	}
	str[j] = '\0';
	return (str);
}
