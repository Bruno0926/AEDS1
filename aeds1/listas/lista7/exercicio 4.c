#include <stdio.h>
int main()
{
int x, *p, **q;
p = &x;

x = 10;
printf("\n%d\n", *p);
return(0);
}