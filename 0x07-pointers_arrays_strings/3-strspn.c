#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the initial segment of
 *
 * @accept: which consist only of bytes from
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
for (int i = 0; i < strlen(s); i++)
{
if (strchr(accept, s[i]))
count++;
else
break;
}
return (count);
}
