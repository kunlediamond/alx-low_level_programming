#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s:first occurrence in the string
 *
 * @accept: matches one of the bytes, or @NULL if no such byte
 *
 * Return: a pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
for (int i = 0; i < strlen(s); i++)
{
if (strchr(accept, s[i]))
return (&s[i]);
}
return (NULL);
}
