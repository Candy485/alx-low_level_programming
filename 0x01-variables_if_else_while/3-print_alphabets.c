#include <stdio.h>
/**
 * main - predefined function
 *
 * Return: Always 0 if succesful
 */

int main(void)
{
char abc;

for (abc = 'a'; abc <= 'z'; abc++)
{
putchar(abc);
}

for (abc = 'A'; abc <= 'Z'; abc++)
{
putchar(abc);
}

putchar('\n');
return (0);
}
