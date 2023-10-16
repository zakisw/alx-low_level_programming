#include <stdlib.h>
#include "main.h"
/**
 * create_array - create array of defined size - size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creat array of defined size - size and assign char c
 * Return: pointer to array, NULL (0) if fail
 *
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *str;
str = malloc(sizeof(char) * size);
if (size == 0 || str == NULL)
return (NULL);
for (i = 0; i < size; i++)
str[i] = c;
return (str);
}
