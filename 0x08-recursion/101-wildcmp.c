#include "main.h"
#include <stdio.h>

/**
 * *star - iterates past asterist
 * @s2: the seccond string
 *
 * Return: the pointer past star
 */
char *star(char *s2)
{
	if (*s2 == '*')
		return (star(s2 + 1));
	else
		return (s2);
}
/**
 * magic - makes magic a reality
 * @s1: the first string
 * @s2: the second string
 * Return: 1 if identical, 0 if false
 */
int magic(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);
	ret += magic(s1 + 1, s2);
	return (ret);
}
/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if identical, 0 if false
 */
int wildcmp(char *s1, char *s2)
{
	int ret = 0;

	if (!*s1 && *s2 == '*' && !*star(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !*s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = star(s2);
		if (!*s2)
			ret += wildcmp(s1 + 1, s2 + 1);
		ret += magic(s1, s2);
		return (!!ret);
	}
	return (0);
}
