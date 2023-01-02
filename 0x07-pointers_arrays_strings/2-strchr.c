#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @c: occurrence of the character
 *
 * @s: in the string
 *
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
for (int i = 0; i < strlen(s); i++)
{
if (s[i] == c)
return (&s[i]);
}
return (NULL);
}
