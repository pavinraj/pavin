#include<stdio.h>
int main()
{
int n,i,j,r,s=0,p=1,l=0,t1,t2,t3;
scanf("%d",&n);
t1=n;
t2=n;
t3=n;
while(n>0)
{
n=n/10;
l++;
}
while(t1>0)
{
r=t1%10;
p=1;
for(i=0;i<l;i++)
{
p=p×r;
}
s=s+p;
t1=t1/10;
}
if(s==t2)
{
printf("yes");
}

else
{
printf("no");
}
return 0;
}
