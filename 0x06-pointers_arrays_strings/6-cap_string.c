#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalized
 *
 * Return: capitalized string.
 */

char *cap_string(char *s)
{
	int i = 0, chg_case = 0;

	while (s[i])
	{
		if (s[i] == s[0] && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		else if (s[i] == ',' ||
				s[i] == ';' ||
				s[i] == '.' ||
				s[i] == '!' ||
				s[i] == '?' ||
				s[i] == '"' ||
				s[i] == '(' ||
				s[i] == ')' ||
				s[i] == '{' ||
				s[i] == '}' ||
				s[i] == '\t' ||
				s[i] == ' ' ||
				s[i] == '\n')
			chg_case = 1;
		else if (chg_case == 1 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
			chg_case = 0;
		}
		else
			chg_case = 0;

		i++;
	}

	return (s);
}
