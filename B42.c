#include<stdio.h>
int main()
{
char a[100],b[100];
int i,j,n1,n2;
scanf("%s%s",&a,&b);
n1=strlen(a);
n2=strlen(b);
if(n1>=n2)
{
printf("%s",a);
}
if(n1<n2)
{
printf("%s",b);
}
return 0;
}


