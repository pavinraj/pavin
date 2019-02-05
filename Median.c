#include<stdio.h>
int main()
{
int a[100],i,j,t,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
for(j=1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}}}
t=n/2;
printf("%d",a[t]);
return 0;
}
