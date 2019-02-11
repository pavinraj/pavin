#include<stdio.h>
int main()
{
int n,i,j,f=0;
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
f++;
}
}
if(f==0)
{
printf("yes");
}

else
{
printf("no");
}
return 0;
}
