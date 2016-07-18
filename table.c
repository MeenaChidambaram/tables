#include<stdio.h>
#include<conio.h>
int main()
{
int a=1,b,c;
clrscr();
printf("enter a no:");
scanf("%d",&b);
while(a<=10)
{
c=a*b;
printf("%d * %d = %d\n",a,b,c);
a=a+1;
}
getch();
return 0;
}
