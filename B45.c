#include<stdio.h>
int main()
{
lonf int n,s=0;
scanf("%ld",&n);
while(n>0)
{
n=n/10;
s++;
}
printf("%ld",s);
return 0;
}
