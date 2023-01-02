#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 *
 * Return: a pointer beg of substring or @Null if it not foound.
 */

char *_strstr(char *haystack, char *needle)
{
for (int i = 0; i < strlen(haystack); i++)
{
if (strncmp(&haystack[i], needle, strlen(needle)) == 0)
return (&haystack[i]);
}
return (NULL);
}
