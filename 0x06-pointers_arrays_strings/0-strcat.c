#include "main.h"

/**
 * _strcat - Concatenates the strings pointed to by @src, including
 * the x null byte, to the end of the string pointed to by @dest.
 *
 * @dest: A pointer to the string to be concatenated upon.
 * @src: the source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest
 */

char *_strcat(char *dest, const char *src)
{
int i = 0, j = 0;

while (dest[i] != '\0')
i++;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i + 1] = '\0';
return (dest);
}
