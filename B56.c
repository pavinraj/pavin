#include<stdio.h>
int main()
{
char a[100];
int i,j=0,l=0;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='a' && a[i]<='z')
{
j++;
}
}
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='1' && a[i]<='9')
{
l++;
}
}
if(l>=1 && n>=1)
{
printf("yes");
}

else
{
printf("no");
}
return 0;
}
