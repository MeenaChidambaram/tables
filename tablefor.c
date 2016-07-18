#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
clrscr();
printf("enter a no:");
scanf("%d",&b);
for(a=1;a<=20;a++)
{
c=a*b;
printf("%d * %d = %d\n",a,b,c);
}
getch();
return 0;
}
