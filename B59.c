#include<stdio.h>
int main()
{
int a[100],i,j,n1,n2;
scanf("%d%d",&n1,&n2);
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n1;i++)
{
if(a[i]==n2)
{
printf("yes");
}

else 
{
printf("no");
}
return 0;
}



