#include<stdio.h>
int main()
{
int n1,n2,i,j,k,a[100];
scanf("%d%d",&n1,&n2);
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n2;i++)
{
k=a[n1-1];
for(i=n1-1;i>=1;i++)
{
a[i]=a[i-1];
}
a[0]=k;
}
for(i=0;i<n1;i++)
{
printf("%d",a[i]);
}
return 0;
}
