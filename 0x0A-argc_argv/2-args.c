#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * @argc : argument count
 * @argv : argument vector
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0 ; i < argc ; i++)
{
printf("%s\n", argv[i]);
}
(void) argc;
return (0);
}
