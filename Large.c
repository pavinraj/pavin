#include<stdio.h>
int main()
{
int a[100],i,t=0,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
if(a[j]>t)
{
t=a[j];
}
}
printf("%d",t);
return 0;
}
