#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
void main()
{
    int i, TamStr;
    char Str[30];
    clrscr();
    scanf("%s", Str);
    TamStr = strlen(Str);
    for(i=0; i<TamStr; i++)
    {                            
     Str[i] = toupper (Str[i]);  
    }
    printf("%s",Str);
    getch();
}