#include<stdio.h>
int main()
{
int n,a=1,b=1,c=1;
scanf("%d",&n);
printf("%d",a);
for(i=0;i<n-1;i++)
{
printf("%d",c);
c=b+a;
a=b;
b=c;

}
return 0;
}

