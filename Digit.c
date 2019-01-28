#include<stdio.h>
int main()
{
int n,r,i=0;
scanf("%d",&n);
while(n>0)
{
r=n%10;
i++;
n=n/10;
}

printf("%d",&i);
return 0;
}
