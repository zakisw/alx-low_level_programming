#include <stdlib.h>
#include "main.h"
/**
* argstostr - main entry
* @ac: int input
* @av: double pointer array
* Return: 0
*/
char *argstostr(int ac, char **av)
{
int j, m, r = 0, k = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (j = 0; j < ac; j++)
{
for (m = 0; av[j][m]; m++)
k++;
}
k += ac;
str = malloc(sizeof(char) * k + 1);
if (str == NULL)
return (NULL);
for (j = 0; j < ac; j++)
{
for (m = 0; av[j][m]; m++)
{
str[r] = av[j][m];
r++;
}
if (str[r] == '\0')
{
str[r++] = '\n';
}
}
return (str);
}

