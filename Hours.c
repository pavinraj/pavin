#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
if(n<=59)
{
printf("0 %d",n);
}
else
{
i=n/60;
n=n%60;
printf("%d %d",i,n);
}
return 0;
}

