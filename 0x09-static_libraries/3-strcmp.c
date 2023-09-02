#include "main.h"
/**
* _strcmp -A function that compares two strings.
* @s1: input value
* @s2: input value
*
* Return: s1[i] - s2[i]
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[1] != '\0')
	{
	if (s1[i] != s2[i])
	{
	return (s1[i] - s2[i]);
	}
	i++;
	}
	return (0);
}
