#include "main.h"

/**
  * _strspn - Entry point
  * @s: input
  * @accept: input
  * Return: Always 0 (Success)
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigmed int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accprt[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
