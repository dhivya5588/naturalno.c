#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,c=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
c=i+c;
}
printf("%d",&c);
getch();
}
