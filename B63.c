#include<stdio.h>
int main()
{
int a[100],i,j,t;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
t=a[0];
for(i=0;i<10;i++)
{
if(a[i]<t)
{
t=a[i];
}
}
printf("%d",t);
return 0;
}
