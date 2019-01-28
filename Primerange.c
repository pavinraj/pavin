#include<stdio.h>
int main()
{
int n1,n2,i,j,f=0:
scanf("%d",&n1,&n2);
  for(i=n1;i<n2;i++)
    {
for(j=2;j<i;j++)
{
if(i%j!=0)
{
printf("%d",i);
}
}
    }
return 0;
}
