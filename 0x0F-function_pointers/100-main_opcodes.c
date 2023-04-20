#include <stdlib.h>
#include <stdio.h>
/**
*main - printfs it own opcodes
*@argc: number of arguments
*@argv: array of arguments
*Return: always 0
*/
int main(int argc, char *argv[])
{
int bytes, i;
char *arr;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
arr = (char *)main;
for (i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%.2x\n", arr[i]);
}
return (0);
}
}
