#include<stdio.h>
int main()
{
int n,a,d,s=0,i;
scanf("%d%d%d",n,a,d);
for(i=0;i<n;i++)
{
s=s+a;
a=a+(i×d);
}
printf("%d",s);
return 0;
}
