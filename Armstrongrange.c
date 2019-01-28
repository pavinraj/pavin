#include<stdio.h>
int main()
{
int n1,n2,i,j,r,s=0,p=1,l=0,t1,t2,t3;
scanf("%d%d",&n1,&n2);
  for(j=n1;j<n2;j++)
    {
t1=n1;
t2=n1;
t3=n1;
    l=0;
while(n>0)
{
n=n/10;
l++;
}
    s=0;
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
printf("%d",t2);
}


return 0;
}
