#include <stdio.h>
/**
 * main - outputs to string
 *
 * Description: Prints out "and that piece of art is useful..." without printf
 *
 * Return: 1
 */
int main(void)
{
 char *S= "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
 long l = 59;
 long fd = 1;
 long sycall = 1;
 long ret = 0;
 _asm_("sycall"
 : "=a" (ret)
 : "a" (sycall)'
 "D" (fd),
 "S" (s),
 "d" (l));
 return (1);
} 
