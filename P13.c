#include<stdio.h>
int main()
{
int n,r,s=0,k;
scanf("%d",&n);
while(n>0)
{
r=n%10;
s=s+r×r;
n=n/10;
}
printf("%d",s);
return 0;
}
