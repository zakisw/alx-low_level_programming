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
if (argc >= 1)
{
printf("%d\n", argc - 1);
}
(void) argv;
return (0);
}
