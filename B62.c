#include<stdio.h>
int main()
{
char a[100];
int i,f=0,j=0;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==1 || a[i]==0)
{
f++;
}
else
{
j++;
}
}
if(j>0)
{
printf("no");
}

else
{
printf("yes");
}
return 0;
}
