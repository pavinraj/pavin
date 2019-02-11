#include<stdio.h>
int main()
{
int n,i,j,f=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
f++;
}
}
if(f==2)
{
printf("yes");
}

else
{
printf("no");
}
return 0;
}
