#include<stdio.h>
int main()
{
int n[100],i,t=0;
for(i=0;i<10;i++)
{
scanf("%d",&n[i]);
}
for(i=0;i<10;i++)
{
if(n[i]>t)
{
t=n[i];
}
}
printf("%d",t);
return 0;
}
