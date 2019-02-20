#include<stdio.h>
int main()
{
int n1,n2,j,i,f=0,c=0;
scanf("%d",&n);
for(i=n1;i<=n2;i++)
{
f=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
{
f++;
}
}
if(f==2)
{
printf("%d",i);
}
}
printf("%d",c);
return 0;
}
