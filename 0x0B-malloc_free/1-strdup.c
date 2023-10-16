#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strdup - duplicate to newly created memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
int j, r = 0;
char *a;
if (str == NULL)
return (NULL);
j = 0;
while (str[j] != '\0')
j++;
a = malloc(sizeof(char) * (j + 1));
if (a == NULL)
return (NULL);
for (r = 0; str[r]; r++)
a[r] = str[r];
return (a);
}

