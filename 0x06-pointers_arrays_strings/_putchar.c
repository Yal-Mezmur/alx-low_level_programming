#include <unistd.h>

/**
*_putchar - write the character c to stdout
*@c:char to printed
*Return: 1 On success
*/
int_putchar(char c)
{
return (write(1, &c, 1));
}
