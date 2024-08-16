#include <stdio.h>
int main()
{
int a = 10, *p, *q, x = 20;
p = &a;
q = &x;
if (*q > *p) printf("\n%d",*q);
else    
    if (*p > *q) printf("\n%d",*p);
return(0);
}

