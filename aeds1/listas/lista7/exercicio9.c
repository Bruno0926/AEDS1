void func(int *px, int *py)
{
px = py;
*py = (*py) * (*px);
*px = *px + 2;
}
int main ()
{
int x = 5, y = 6;
scanf("%d",&x);
scanf("%d",&y);
func(&x,&y);
printf("x = %d, y = %d", x, y)
return 0;
}

