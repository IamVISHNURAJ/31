#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int i,flag=0;
    gets (a);
    for(i=0;a[i]!='\0';i++)
    {
    if(a[i]!=' ')
    {
        flag++;
    }
   
    }
   printf("%d",flag);
}
