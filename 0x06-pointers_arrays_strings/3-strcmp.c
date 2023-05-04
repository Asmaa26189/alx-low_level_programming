#include "main.h"
/**
 * _strcmp - compare strings
 * @s1: first
 * @s2: second
 *
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
