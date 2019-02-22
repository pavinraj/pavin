#include<stdio.h>
int main()
{
char a[100];
int n,i,k=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=n-1;i>=0;i--)
{
if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
{
printf("%c",a[i]);
}
}
return 0;
}
