#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * _strlen - This is the length of the string
 * @s:char
 * Return:integer
 */
int _strlen(const char *s)
{
int m;

    for (m = 0; s[m] != '\0'; m++)
    {
        continue;
    }
return (m);
}
/**
 * binary_to_uint - convert binary to unsigned integer
 * @b:string from 0 and 1 else NULL
 *
 * Return:unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int k = 1;
unsigned int m = 0;
int c;
unsigned int len;

if (b == NULL)
    return (0);

len = _strlen(b);

for (c = len - 1; c >= 0; c--)
{
if (b[c] != '0' && b[c] != '1')
    return (0);
if (b[c] == '1')
{
    m += k;
}
k *= 2;
}
return (m);
}

