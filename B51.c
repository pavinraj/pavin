#include<stdio.h>
int main()
{
int n,s=0,r,i;
scanf("%d",&n);
while(n>0)
{
r=n%10;
s=s×10+r;
n=n/10;
}
while(i>0)
{
r=i%10;
printf("%d\t",r);
i=i/10;
}
return 0;
}
