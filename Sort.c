#include<stdio.h>
int main()
{
int a[100],i,j,t;
 printf("enter n");
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
}
}
}
  printf("after sorting is:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return 0;
}
