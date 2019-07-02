#include "holberton.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer-parameter
 * Return: int.
 */
int _atoi(char *s)
{
	int i;
	int res = 0;
	int sig = 1;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == '-')
			sig = sig * -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10;
			res += (s[i] - '0');
		}
		else if (s[i - 1] >= '0' && s[i - 1] <= '9')
			break;
	}
	res = sig * res;
	return (res);
}
