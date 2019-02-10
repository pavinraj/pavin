#include<stdio.h>
int main()
{
int a[100],n1,n2,i,j=0;
scanf("%d%d",&n1,&n2);
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==n2)
{
j++;
}
}
printf("%d",j);
return 0;
}
