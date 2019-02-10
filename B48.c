#include<stdio.h>
int main()
{
int a[100],i,j=0,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
j=j+a[i];
}
i=j/2;
printf("%d",j);
return 0;
}
