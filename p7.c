#include<stdio.h>
int main()
{
char a[100],b,c=0;
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
ifi%2==0)
{
b=a[i];
a[i]=a[i+1];
a[i+1]=b;
}
}
printf("%s",a);
return 0;
}
