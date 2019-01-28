#include<stdio.h>
int main()
{
int n,i,a[100],j=0,t;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&t);
for(i=0;i<t;i++)
{
j=j+a[i];
}
printf("%d",j);
return 0;
}
